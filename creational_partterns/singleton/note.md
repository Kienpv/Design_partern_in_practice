✅ Ý nghĩa:
 - Đảm bảo một class chỉ có một instance duy nhất trong toàn bộ chương trình và cung cấp một điểm truy cập toàn cục.

🕐 Khi nào sử dụng:
 - Quản lý kết nối cơ sở dữ liệu (database), bộ nhớ đệm (cache).
 - Logger hệ thống
 - Cấu hình toàn cục (global configuration)

❌ Khi không nên dùng:
 - Trong môi trường đa luồng phức tạp nếu không xử lý đồng bộ tốt.
 - Khi cần khả năng mở rộng hoặc unit test (Singleton khó mock).

⚠️ Lưu ý:
 - Không thread-safe trong phiên bản đơn giản
 - Khó test do tính toàn cục
 - Cẩn thận với khởi tạo lười (lazy initialization) và đa luồng (thread-safety).
 - Tránh biến Singleton thành "God object" (đối tượng biết và làm mọi thứ).


    Hãy giải thích ý nghĩa, khi nào nên sử dụng, khi nào không nên sử dụng và những lưu ý khi sử dụng các loại design partern của từng nhóm kèm theo ví dụ source code C++ tương ứng. 