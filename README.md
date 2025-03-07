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
+ 25 14 3 8 19
+ 4 9 18 13 2
+ 15 24 1 20 7
+ 10 5 22 17 12
+ 23 16 11 6 21 

  
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
+ 64 9 22 29 2 7 20 5
+ 23 30 1 8 21 4 17 14
+ 10 63 28 3 16 13 6 19
+ 31 24 43 12 27 18 15 52
+ 62 11 26 35 42 51 56 47
+ 25 32 39 44 59 48 53 50
+ 38 61 34 41 36 55 46 57
+ 33 40 37 60 45 58 49 54


### Ví dụ 3
**Input:**  
n=5 và giá trị khởi đầu của mã là x=0;y=1.

**Output:**  
Khong co buoc di nao thoa man.


---

## 5. Link video báo cáo
https://drive.google.com/file/d/1-wukQUCJpyDfn0O8IEUJDlvqc36Ayyte/view?usp=sharing
---
## 6. Ưu nhược điểm: 
**Ưu Điểm**
+ Mã nguồn ngắn gọn, dễ hiểu.
+ Đệ quy giúp diễn đạt thuật toán tìm đường một cách trực quan, dễ theo dõi hơn so với cách triển khai vòng lặp.
+ Chương trình tuân theo tư duy "thử và quay lui" (backtracking) một cách tự nhiên.
+ Dễ triển khai kỹ thuật "quay lui" (backtracking), khi một nước đi không khả thi, ta chỉ cần quay lui bằng cách giảm biến dem và đặt lại banco[x][y] = -1.Điều này giúp dễ dàng tìm kiếm các lời giải mà không cần cấu trúc dữ liệu phức tạp.
**Nhược Điểm**
+ Dễ gây lỗi "tràn stack" khi n lớn, mỗi lần gọi hàm đệ quy, một khung stack mới được tạo, chiếm bộ nhớ.
+ Nếu bàn cờ lớn (ví dụ n>8) hoặc có nhiều nhánh phải thử, số lần gọi hàm tăng nhanh dẫn đến tràn ngăn xếp (stack overflow).
+ Không tối ưu về hiệu suất, đệ quy truyền thống duyệt qua tất cả các nước đi mà không có chiến lược ưu tiên.
