✅ Ý nghĩa:
 - Cung cấp một interface để tạo một họ các đối tượng liên quan hoặc phụ thuộc, mà không chỉ định lớp cụ thể.

🕐 Khi nào sử dụng:
 - Khi hệ thống cần tạo nhiều đối tượng liên quan, các đối tượng tương thích với nhau.
 - Khi muốn tách riêng code tạo đối tượng khỏi code sử dụng

❌ Khi không nên dùng:
 - Khi không có nhiều họ sản phẩm.
 - Khi cấu trúc sản phẩm không thay đổi nhiều.

⚠️ Lưu ý:
 - Dễ làm phức tạp kiến trúc, khó mở rộng số lượng loại sản phẩm (thêm loại → sửa nhiều nơi).
 - Dễ bị dư thừa nếu không có họ sản phẩm rõ ràng.