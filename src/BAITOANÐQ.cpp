#include<iostream>

using namespace std;
//các bu?c nh?y th?a mãn 
int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

const int n=8;
int banco[n][n];
int dem=0;
void buocdi() {
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << banco[i][j] << " ";}
	cout << endl;}
}

void diChuyen(int x, int y) {
	++dem;
	banco[x][y] = dem;
	for (int i = 0; i < 8; i++)	{
		if (dem == n * n) {
			cout << "Cac buoc di la: "<<endl;
			buocdi();
			exit(0);
		}
		int u = x + dx[i];
		int v = y + dy[i];
		
		if (u >= 0 && u < n&&v >= 0 && v < n&& banco[u][v] == -1)
			diChuyen(u, v);
	}
	--dem;
	banco[x][y] = -1;
}


int main(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			banco[i][j]=-1;
		}
	}
	int x,y;
	cout<<"Nhap gia tri khoi dau(x y):";
	cin>>x>>y;
	diChuyen(x,y);
	cout<<"Khong co buoc di nao thoa man.";
	return 0;
}

