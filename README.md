# Báo cáo Bài tập lớn - Nhóm 13

## 1. Thông tin nhóm
| STT | Họ và tên | MSSV | Vai trò |
|---|---|---|---|
| 1 | Phạm Nguyễn Thu Giang | 24022784 | Nhóm trưởng |
| 2 | Phạm Đức Hiệu | 24022790 | Thành viên |
| 3 | Đặng Văn Giáp | 24022785 | Thành viên |
| 4 | Nguyễn Minh Nhất | 24022822 | Thành viên |
| 3 | Đỗ Hoàng Trung | 24022838 | Thành viên |

---

## 2. Thông tin bài tập
- **Tên bài toán**: Knighs Tour-Bài Mã đi tuần

---

## 3. Hướng giải quyết bài toán
### a. Phân tích bài toán
Đề bài: Trên bài cờ NxN, con mã điểm (x,y). Tìm đường đi qua mọi ô đúng 1 lần
Phân tích đề bài:
 #### Input: 
    + n -  kích cỡ của bàn cờ
	  + x, y: vị trí ban đầu của quân mã
 #### Output: 
+ Các bước di chuyển của quân mã trên bàn cơ (Nếu thỏa mãn) hoặc không tồn tại cách di chuyển nào.
  Sử dụng đệ quy để thử từng nước đi.
+ Nếu thăm được tất cả các ô -> thành công
+ Nếu vào ngõ cụt -> quay lui lại nước đi trước đó!


### b. Thuật toán/Hướng tiếp cận
(Mô tả chi tiết cách giải quyết bài toán, có thể kèm theo sơ đồ hoặc giả mã để minh họa)
![image](https://github.com/user-attachments/assets/9712d3e2-61f8-4459-bed5-c843048496e4)
#### Xây dựng 2 mảng dx[] và dy[] để lưu các cách đi của quân mã bằng tọa độ 
-> tùy vào vị trí mã ta sẽ có nhiều nhất 8 cách đi bằng cách lấy tọa độ của mã cộng lần lượt với dx và dy.
Thuật Toán
+ Khởi tạo mảng kích thước NxN theo yêu cầu bài toán
+ Khởi tạo 2 mảng dx[] và dy[] tương ứng với các nước đi của quân mã theo tọa độ x và y
+ Đệ quy thử tất cả các nước đi có thể, nếu đi hết bàn cờ thì dừng lại.
+ In kết quả: + từng bước đi trên bàn cờ nếu thành công
		 +  “Khong co buoc di nao thoa man.”
#### Chi Tiết hơn phần đệ quy:
+ Ta dùng vòng lặp để kiểm tra đủ 8 nước đi của mã, nếu mã đi thỏa mãn đk sẽ tiếp tục đệ quy để tìm ra nước đi tiếp theo cho đến khi hết bàn cờ
+ Trường hơp nó đi vào ô không thỏa mãn( đi vào ngõ cụt) thì sẽ quay lại bước đi trước đó và tiếp tục đệ quy
+ Nếu đi hết tất cả các trường hợp đề sai thì sẽ in ra không có bước đi nào thỏa mãn 






---

## 4. Ví dụ minh hoạ
### Ví dụ 1
**Input:**  
n=5 và giá trị khởi đầu của mã là x=2;y=2.

**Output:**
*** Cac buoc di la:
+ 23 10 15 4 25
+ 16 5 24 9 14
+ 11 22 1 18 3
+ 6 17 20 13 8
+ 21 12 7 2 19 

  
**Giải thích:**  
(Mô tả cách giải)
+ Bàn cờ 5x5 được khởi tạo với giá trị -1 để biểu thị chưa đi qua ô nào.
Quân mã bắt đầu tại (2,2) (ô trung tâm).
+ Các bước đi hợp lệ của quân mã (2,2) là:

(0,1)
(0,3)
(1,0)
(1,4)
(3,0)
(3,4)
(4,1)
(4,3)

### Ví dụ 2
**Input:**  
n=8 và giá trị khởi đầu của mã là x=1;y=2.

**Output:**  
***Cac buoc di la:
+ 1 60 39 34 31 18 9 64
+ 38 35 32 61 10 63 30 17
+ 59 2 37 40 33 28 19 8
+ 36 49 42 27 62 11 16 29
+ 43 58 3 50 41 24 7 20
+ 48 51 46 55 26 21 12 15
+ 57 44 53 4 23 14 25 6
+ 52 47 56 45 54 5 22 13

**Giải thích:**  
(Mô tả cách giải)

### Ví dụ 3
**Input:**  
n=5 và giá trị khởi đầu của mã là x=0;y=1.

**Output:**  
Khong co buoc di nao thoa man.

**Giải thích:**  
(Mô tả cách giải)

---

## 5. Link video báo cáo
https://drive.google.com/file/d/1rhOc-X5N-KTTrakAhcUvXiuwL_mubOVT/view?usp=sharing
BTL_13 - PowerPoint 2025-03-06 16-42-41.mp4

---
