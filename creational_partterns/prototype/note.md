✅ Ý nghĩa:
 - Tạo đối tượng mới bằng cách sao chép (clone) một đối tượng hiện tại thay vì tạo mới từ đầu.

🕐 Khi nào sử dụng:
 - Khi việc tạo mới rất tốn chi phí (ví dụ: sao chép config/phức tạp)
 - Khi bạn cần nhiều đối tượng giống nhau có thể tùy biến chút ít

❌ Khi không nên dùng:
 - Khi đối tượng không thể hoặc không nên được sao chép.

⚠️ Lưu ý:
 - Cần đảm bảo deep copy nếu có con trỏ (phân biệt với shallow copy)
 - Cẩn thận với ownership nếu dùng raw pointer
 - Đảm bảo tất cả thành phần bên trong đều có thể clone.