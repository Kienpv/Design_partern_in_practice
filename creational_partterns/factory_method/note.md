✅ Ý nghĩa:
 - Định nghĩa một interface để tạo đối tượng, nhưng để các lớp con quyết định lớp nào sẽ được khởi tạo.

🕐 Khi nào sử dụng:
 - Khi lớp không biết chính xác đối tượng cần tạo
 - Khi muốn tách rời logic tạo object khỏi class sử dụng object

❌ Khi không nên dùng:
 - Khi chỉ có một hoặc rất ít loại đối tượng, không cần phức tạp hóa.

⚠️ Lưu ý:
 - Tăng số lượng lớp, Dễ mở rộng nhưng có thể khiến cấu trúc lớp trở nên phức tạp.
 - Cần rõ ràng về mục đích để tránh rối rắm