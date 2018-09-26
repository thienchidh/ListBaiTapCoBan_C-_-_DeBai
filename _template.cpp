/*Link tham khảo constest tương ứng: (D:\learning\iACM\practices\_newConstest\Constest02)
Chương 1:
*/___/* Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
*/___/* Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2 */___/* Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n */___/* Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
*/___/* Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1) */___/* Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1) */___/* Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
*/___/* Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2 */___/* Bài 9: Tính T(n) = 1 x 2 x 3…x N
*/___/* Bài 10: Tính T(x, n) = x^n
*/___/* Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
*/___/* Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n */___/* Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
*/___/* Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
*/___/* Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
*/___/* Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + ….
+ N
*/___/* Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
*/___/* Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
*/___/* Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)! */___/* Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
*/___/* Bài 21: Tính tổng tất cả các “ước số” của số nguyên dương n */___/* Bài 22: Tính tích tất cả các “ước số” của số nguyên dương n */___/* Bài 23: Đếm số lượng “ước số” của số nguyên dương n
*/___/* Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
*/___/* Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n */___/* Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
*/___/* Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
*/___/* Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
*/___/* Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25

*/___/* Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
*/___/* Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
*/___/* Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
*/___/* Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
*/___/* Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1) có n dấu căn
*/___/* Bài 35:
*/___/* Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
*/___/* Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
*/___/* Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
*/___/* Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
*/___/* Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn
*/___/* Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số */___/* Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + …
+ k
*/___/* Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n */___/* Bài 44: Hãy tính tổng các chữ số của số nguyên dương n */___/* Bài 45: Hãy tính tích các chữ số của số nguyên dương n
*/___/* Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n */___/* Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n */___/* Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
*/___/* Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n */___/* Bài 50: Hãy tìm số đảo ngược của số nguyên dương n

*/___/* Bài 51: Tìm chữ số lớn nhất của số nguyên dương n */___/* Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
*/___/* Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n */___/* Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n */___/* Bài 55:
*/___/* Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không */___/* Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không */___/* Bài 58:
*/___/* Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không */___/* Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
*/___/* Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
*/___/* Bài 62: Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số
này.
*/___/* Bài 63: Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số
này
*/___/* Bài 64 + 65 + 66: Giải phương trình bậc 1, 2, 4
*/___/* Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n */___/* Bài 68: Tính S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n
*/___/* Bài 69: Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1
*/___/* Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2
+ 3+ … + n)
*/___/* Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
*/___/* Bài 72: Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
*/___/* Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
*/___/* Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … + (-1)^n+1 * x^2n+1/(2n
+ 1)!
*/___/* Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không */___/* Bài 76: Kiểm tra số nguyên 4 byte có dạng 3^k hay không
Chương 2:

*/___/* Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n */___/* Bài 78: Liệt kê tất cả các ước số của số nguyên dương n
*/___/* Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n */___/* Bài 80: Giống */___/* Bài 16
*/___/* Bài 81: Viết chương trình cho tất cả các */___/* Bài tập chương trước bằng kỹ thuật lập
trình hàm(đéo làm)
Chương 3:
*/___/* Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
*/___/* Bài 83: Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không
*/___/* Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0 */___/* Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm */___/* Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
*/___/* Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000 */___/* Bài 88: Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z
*/___/* Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
*/___/* Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
*/___/* Bài 91: In tất cả các số nguyên dương lẻ nhỏ hơn 100
*/___/* Bài 92: Tìm ước số chung lớn nhất của 2 số nguyên dương
*/___/* Bài 93: Viết chương trình kiểm tra 1 số có phải là số nguyên tố hay không
*/___/* Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93 */___/* Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
*/___/* Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm số
f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5
*/___/* Bài 97: Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì */___/* Bài 98: Lập chương trình giải hệ: ax + by = c
Dx + ey = f. Các hệ số nhập từ bàn phím
*/___/* Bài 99: Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo
thứ tự tăng dần mà chỉ dùng tối đa 1 biến phụ
*/___/* Bài 100: Viết chương trình giải phương trình bậc 2

*/___/* Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
*/___/* Bài 102: Viết chương trình nhập vào 1 ngày (ngày, tháng, năm). Tìm ngày kế
ngày vừa nhập (ngày, tháng, năm)
*/___/* Bài 103: Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày
trước ngày vừa nhập (ngày, tháng, năm)
*/___/* Bài 104: Viết chương trình nhập ngày, tháng, năm. Tính xem ngày đó là ngày
thứ bao nhiêu trong năm
*/___/* Bài 105: Viết chương trình nhập 1 số nguyên có 2 chữ số. Hãy in ra cách đọc của số nguyên này
*/___/* Bài 106 Viết chương trình nhập 1 số nguyên có 3 chữ số. Hãy in ra cách đọc của số nguyên này
*/___/* Bài 107: Viết hàm tính S = CanBacN(x) */___/* Bài 108: Viết hàm tính S = x^y
*/___/* Bài 109: Viết chương trình in bảng cửu chương ra màn hình
*/___/* Bài 110: Cần có tổng 200000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng,
5000 đồng. Lập chương trình để tìm ra tất cả các phương án có thể
*/___/* Bài 111: Viết chương trình in ra tam giác cân có độ cao h
a.	Tam giác cân đặc nằm giữa màn hình
b.	Tam giác cân rỗng nằm giữa màn hình
c.	Tam giác vuông cân đặc
d.	Tam giác vuông cân rỗng
*/___/* Bài 112: Viết chương trình in ra hình chữ nhật có kích thước m x n
a.	Hình chữ nhật đặc
b.	Hình chữ nhật rỗng
*/___/* Bài 113: Lập chương trình tính sin(x) với độ chính xác 0.00001 theo công thức
Sin(x) = x – x^3/3! + x^5/5! + … + (-1)^n . x^2n + 1/(2n + 1)!
*/___/* Bài 114: Viết lại các */___/* Bài tập trong chương trước bằng vòng lặp for ( tự làm)
Chương 4:
*/___/* Bài 115: Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
*/___/* Bài 116: Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n
*/___/* Bài 117: Viết chương trình nhập n và tính tổng S(n) = x + x^2 + x^3 + … +

x^n
*/___/* Bài 118: Viết lại các */___/* Bài tập trong chương trước bằng kỹ thuật lập trình hàm */___/* Bài 119: Liệt kê tất cả các số nguyên tố nhỏ hơn n
*/___/* Bài 120: Liệt kê tất cả các số chính phương nhỏ hơn n
Chương 5:
*/___/* Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
*/___/* Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong
mảng 1 chiều các số nguyên
*/___/* Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
*/___/* Bài 125: Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng */___/* Bài 126: Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực */___/* Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần
*/___/* Bài tập kỹ thuật nhập, xuất mảng
*/___/* Bài 128 + 130: Viết hàm nhập, xuất mảng 1 chiều các số thực
*/___/* Bài 129 + 131: Viết hàm nhập, xuất mảng 1 chiều các số nguyên
*/___/* Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên */___/* Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực
Kỹ thuật đặt lính canh, các */___/* Bài tập cơ bản
*/___/* Bài 134: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
*/___/* Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1
*/___/* Bài 136: Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng
không có giá trị chẵn thì trả về -1
*/___/* Bài 137: Tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1
chiều các số thực
*/___/* Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên.
Nếu mảng không có giá trị chẵn thì sẽ trả về -1
*/___/* Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên.
Nếu mảng không có số hoàn thiện thì trả về giá trị -1
*/___/* Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì sẽ trả về -1

*/___/* Bài 141: Hãy tìm vị trí giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1
Các */___/* Bài tập luyện tập
*/___/* Bài 142: Tìm giá trị nhỏ nhất trong mảng 1 chiều số thực
*/___/* Bài 143: Viết hàm tìm số chẵn đầu tiên trong mảng các số nguyên. Nếu mảng
không có giá trị chẵn thì trả về -1
*/___/* Bài 144: Tìm số nguyên tố đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về – 1
*/___/* Bài 145: Tìm số hoàn thiện đầu tiên trong mảng 1 chiều số nguyên. Nếu mảng
không có số hoàn thiện thì trả về -1
*/___/* Bài 146: Tìm giá trị âm đầu tiên trong mảng 1 chiều các số thực. Nếu mảng
không có giá trị âm thì trả về -1
*/___/* Bài 147: Tìm số dương cuối cùng trong mảng số thực. Nếu mảng không có giá
trị dương thì trả về -1
*/___/* Bài 148: Tìm số nguyên tố cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về -1
*/___/* Bài 149: Tìm số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về -1
*/___/* Bài 150: Hãy tìm giá trị âm lớn nhất trong mảng 1 chiều các số thực. Nếu mảng
không có giá trị âm thì trả về -1
*/___/* Bài 151: Hãy tìm số nguyên tố lớn nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về -1
*/___/* Bài 152: Hãy tìm số hoàn thiện nhỏ nhất trong mảng 1 chiều các số nguyên.
Nếu mảng không có số hoàn thiện thì trả về -1
*/___/* Bài 153: Hãy tìm giá trị chẵn nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số chẵn thì trả về -1
*/___/* Bài 154: Hãy tìm vị trí giá trị âm nhỏ nhất trong mảng các số thực. Nếu mảng
không có số âm thì trả về -1

*/___/* Bài tập luyện tập tư duy:
*/___/* Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
*/___/* Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất
*/___/* Bài 157: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này

chứa tất cả các giá trị trong mảng
*/___/* Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x]
chứa tất cả các giá trị trong mảng
*/___/* Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị
2003. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
*/___/* Bài 160: Cho mảng 1 chiều các số thực, hãy tìm giá trị âm cuối cùng lớn hơn giá
trị -1. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
*/___/* Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
*/___/* Bài 162: Cho mảng 1 chiều các số thực. Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện: có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận. Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị -1
*/___/* Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên */___/* Bài 164: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh
*/___/* Bài 165: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên có chữ số đầu tiên là chữ số lẻ
*/___/* Bài 166: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên trong mảng có dạng 2^k. Nếu mảng không có giá trị dạng 2k thì hàm sẽ trả về 0
*/___/* Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0
*/___/* Bài 168: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất trong mảng có dạng 5^k. Nếu mảng khong tồn tại giá trị 5^k thì hàm sẽ trả về 0
*/___/* Bài 169 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số chẵn nhỏ nhất lớn hơn mọi giá trị có trong mảng
*/___/* Bài 170: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng
*/___/* Bài 171: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng

*/___/* Bài 172: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng
*/___/* Bài 173 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm chữ số xuất hiện ít nhất trong mảng
*/___/* Bài 174 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a, b) trong mảng thỏa điều kiện a <= b
*/___/* Bài 175 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm tìm 2 giá trị gần nhau nhất trong mảng (Lưu ý: Mảng có các giá trị khác nhau từng đôi một còn có tên là mảng phân biệt)

Các */___/* Bài tập tìm kiếm và liệt kê:
*/___/* Bài 176: Hãy liệt kê các số âm trong mảng 1 chiều các số thực
*/___/* Bài 177: Hãy liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x, y] cho trước
*/___/* Bài 178: Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn
[x, y] cho trước (x, y là các số nguyên)
*/___/* Bài 179: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện lớn hơn giá trị tuyệt đối của giá trị đứng liền sau nó
*/___/* Bài 180: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt đối của giá trị đứng liền sau nó và lớn hơn trị tuyệt đối của giá trị đứng liền trước nó
*/___/* Bài 181: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵn
có ít nhất 1 lân cận cũng là giá trị chẵn
*/___/* Bài 182: Cho mảng 1 chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị trong mảng có ít nhất 1 lận cận trái dấu với nó
*/___/* Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị tại đó là giá trị lớn nhất
trong mảng 1 chiều các số thực
*/___/* Bài 184: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1
chiều các số nguyên
*/___/* Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1
chiều các số nguyên

*/___/* Bài 186: Hãy liệt kê các vị trí trong mảng 1 chiều các số thực mà giá trị tại đó bằng giá trị âm đầu tiên trong mảng
*/___/* Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
*/___/* Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên */___/* Bài 189: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẻ
*/___/* Bài 190: Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng 1 chiều các số
nguyên
*/___/* Bài 191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thực. Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận
*/___/* Bài 192: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu
tiên là số chẵn
*/___/* Bài 193: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị trong
mảng có dạng 3^k. Nếu mảng không có giá trị đó thì trả về 0
*/___/* Bài 194: Cho mảng 1 chiều các số nguyên có nhiều hơn 2 giá trị. Hãy viết hàm
liệt kê các cặp giá trị gần nhau nhất
*/___/* Bài 195:
*/___/* Bài 196: Liệt kê các số âm trong mảng 1 chiều các số nguyên
*/___/* Bài 197: Hãy liệt kê các giá trị trong mảng các số nguyên có chữ số đầu tiên là
chữ số lẻ
*/___/* Bài 198: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng 1
chiều các số thực
*/___/* Bài 199: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1
chiều các số nguyên

Kỹ thuật tính tổng:
*/___/* Bài 200: Tính tổng các phần tử trong mảng
*/___/* Bài 201: Tính tổng các giá trị dương trong mảng 1 chiều các số thực
*/___/* Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều
các số nguyên
*/___/* Bài 203: Tinh tổng các chữ số có chữ số hàng chục là 5 trong mảng 1 chiều các
số nguyên

*/___/* Bài 204: Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng 1
chiều các số thực
*/___/* Bài 205: Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó trong mảng 1 chiều các số thực
*/___/* Bài 206: Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng 1 chiều
các số thực
Lưu ý: Một giá trị trong mảng có tối đa 2 giá trị xung quang
*/___/* Bài 207: Tính tổng các phần tử “cực trị” trong mảng. Một phần tử được gọi là
cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó
*/___/* Bài 208: Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên */___/* Bài 209: Tính tổng các giá trị đối xứng trong mảng các số nguyên
*/___/* Bài 210: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng các
số nguyên
*/___/* Bài 211: Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số
nguyên
*/___/* Bài 212: Tính trung bình cộng các số dương trong mảng 1 chiều các số thực */___/* Bài 213: Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng 1 chiều các số thực
*/___/* Bài 214: Tính trung bình nhân các giá trị dương có trong mảng 1 chiều các số thực
*/___/* Bài 215 (*): Tính khoảng các trung bình giữa các giá trị trong mảng

Kỹ thuật đếm
*/___/* Bài 216: Đếm số lượng số chẵn trong mảng
*/___/* Bài 217: Đếm số dương chia hết cho 7 trong mảng
*/___/* Bài 218: Đếm số đối xứng trong mảng
*/___/* Bài 219: Đếm số lần xuất hiện của giá trị x trong mảng
*/___/* Bài 220: Đếm số lượng giá trị tận cùng bằng 5 trong mảng
*/___/* Bài 221: Cho biết sự tương quan giữa số lượng chẵn và lẻ trong mảng
Hàm trả về 1 trong 3 giá trị -1, 0, 1 Giá trị -1 là chẵn nhiều hơn lẻ
Giá trị 0 là chẵn bằng lẻ
Giá trị 1 là chẵn ít hơn lẻ

*/___/* Bài 222: Đếm phần tử lớn hơn hay nhỏ hơn phần tử xung quanh mảng
*/___/* Bài 223: Đếm số nguyên tố trong mảng
*/___/* Bài 224: Đếm số hoàn thiện trong mảng
*/___/* Bài 225: Đếm số lượng giá trị lớn nhất có trong mảng
*/___/* Bài 226: Hãy xác định số lượng phần tử kề nhau mà cả 2 đều chẵn
*/___/* Bài 227: Hãy xác định số lượng phần tử kề nhau mà cả 2 trái dấu
*/___/* Bài 228: Hãy xác định số lượng phần tử kề nhau mà số đứng sau cùng dấu số đứng trước và có giá trị tuyệt đối lớn hơn
*/___/* Bài 229: Đếm số lượng các giá trị phân biệt có trong mảng
*/___/* Bài 230: Liệt kê tần suất xuất hiện các giá trị trong mảng (mỗi giá trị liệt kê 1
lần)
*/___/* Bài 231: Hãy liệt kê các giá trị xuất hiện trong mảng 1 chiều các số nguyên
đúng 1 lần
*/___/* Bài 232: Hãy liệt kê các giá trị xuất hiện trong dãy quá 1 lần. Lưu ý: mỗi giá trị liệt kê 1 lần
*/___/* Bài 233: Hãy liệt kê tần suất của các giá trị xuất hiện trong dãy. Lưu ý: mỗi giá
trị liệt kêt tần suất 1 lần
*/___/* Bài 234: Cho 2 mảng a, b. Đếm số lượng giá trị chỉ xuất hiện 1 trong 2 mảng */___/* Bài 235: Cho 2 mảng a, b. Liệt kê các giá trị chỉ xuất hiện 1 trong 2 mảng */___/* Bài 236(*): Cho 2 mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong mảng b
*/___/* Bài 237 + 238(*): Hãy liệt kê các giá trị có số lần xuất hiện nhiều nhất trong
mảng
*/___/* Bài 239: Hãy đếm số lượng số nguyên tố phân biệt trong mảng
*/___/* Bài 240: Kiểm tra mảng có giá trị 0 hay không? Có trả về 1, không có trả về 0 */___/* Bài 241: Kiểm tra mảng có 2 giá trị 0 liên tiếp hay không? Có trả về 1, không có trả về 0
*/___/* Bài 242: Kiểm tra mảng có số chẵn hay không? Có trả về 1, không có trả về 0 */___/* Bài 243: Kiểm tra mảng có số nguyên tố hay không? Có trả về 1, không có trả về 0
*/___/* Bài 244: Kiểm tra mảng thỏa tính chất: mảng không có số hoàn thiện lớn hơn
256. Có trả về 1, không có trả về 0
*/___/* Bài 245: Kiểm tra mảng có toàn số chẵn không? Có trả về 1, không có trả về 0

*/___/* Bài 246: Kiểm tra mảng có đối xứng không? Có trả về 1, không có trả về 0 */___/* Bài 247: Ta định nghĩa 1 mảng có tính chất lẻ, khi tổng của 2 phần tử liên tiếp luôn là lẻ. Kiểm tra mảng có tính chất lẻ hay không
*/___/* Bài 248: Kiểm tra mảng có tăng dần hay không */___/* Bài 249: Kiểm tra mảng có giảm dần hay không
*/___/* Bài 250: Hảy cho biết các phần tử trong mảng có lập thành cấp số cộng hay không? Nếu có chỉ ra công sai d
*/___/* Bài 251: Hãy cho biết các phần tử trong mảng có bằng nhau không
*/___/* Bài 252: Ta định nghĩa 1 mảng được gọi là dạng song, khi phần tử có trị số I lớn hơn hoặc nhỏ hơn 2 phần tử xung quanh. Hãy viết hàm kiểm tra mảng có dạng sóng không
*/___/* Bài 253: Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b không
*/___/* Bài 254: Hãy đếm giá trị trong mảng thỏa: lớn hơn tất cả các giá trị đứng đằng trước nó

Kỹ thuật sắp xếp
*/___/* Bài 255: Sắp xếp mảng tăng dần
*/___/* Bài 256: Sắp xếp mảng giảm dần
*/___/* Bài 257: Sắp xếp lẻ tăng dần nhưng giá trị khác giữ nguyên vị trí
*/___/* Bài 258: Sắp xếp số nguyên tố tăng dần nhưng giá trị khác giữ nguyên vị trí */___/* Bài 259: Sắp xếp số hoàn thiện giảm dần nhưng giá trị khác giữ nguyên vị trí */___/* Bài 260: Cho 2 mảng a, b. Hãy cho biết mảng b có phải là hoán vị của mảng a không
*/___/* Bài 261: Sắp xếp số dương tăng dần, các số âm giữ nguyên vị trí
*/___/* Bài 262: Sắp xếp chẵn, lẻ tăng dần nhưng vị trí tương đối giữa các số không thay đổi
*/___/* Bài 263: Sắp xếp số dương tăng dần, âm giảm dần. Vị trí tương đối không thay
đổi
*/___/* Bài 264: Trộn 2 mảng đã tăng thành 1 mảng được sắp xếp tăng
*/___/* Bài 265: Cho 2 mảng tăng. Hãy trộn thành 1 mảng giảm dần

Kỹ thuật thêm

*/___/* Bài 266: Thêm 1 phần tử x vào mảng tại vị trí k
*/___/* Bài 267: Viết hàm nhập mảng sao cho khi nhập xong thì giá trị trong mảng sắp xếp giảm dần
*/___/* Bài 268: Hãy tạo mảng b từ mảng a các giá trị 0, 1 để mảng có tính chẵn lẻ */___/* Bài 269: Thêm x vào trong mảng tăng nhưng vẫn giữ nguyên tính tăng của mảng
*/___/* Bài 270: Nhập mảng sau khi nhập xong đã tự sắp xếp tăng dần
Kỹ thuật xóa
*/___/* Bài 271: Xóa các phần tử có chỉ số k trong mảng
*/___/* Bài 272: Hãy xóa tất cả số lớn nhất trong mảng các số thực
*/___/* Bài 273: Xóa tất cả các số âm trong mảng
*/___/* Bài 274: Xóa tất cả các số chẵn trong mảng
*/___/* Bài 275: Xóa tất cả các số chính phương trong mảng
*/___/* Bài 276: Xóa tất cả các phần tử trùng với x
*/___/* Bài 277: Xóa tất cả các số nguyên tố trong mảng
*/___/* Bài 278: Xóa tất cả các phần tử trùng nhau trong mảng và chỉ giữ lại duy nhất 1
phần tử
*/___/* Bài 279: Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảng
Kỹ thuật xử lý mảng
*/___/* Bài 280: Hãy đưa số 1 về đầu mảng
*/___/* Bài 281: Hãy đưa chẵn về đầu, lẻ về cuối, phần tử 0 nằm giữa mảng
*/___/* Bài 282: Đưa các số chia hết cho 3 về đầu mảng
*/___/* Bài 283: Đảo ngược mảng ban đầu
*/___/* Bài 284: Đảo ngược thứ tự các số chẵn trong mảng */___/* Bài 285: Đảo ngược thứ tự số dương trong mảng */___/* Bài 286: Dịch trái xoay vòng k phần tử trong mảng */___/* Bài 287: Dịch phải xoay vòng k phần tử trong mảng
*/___/* Bài 288: Hãy xuất phần tử trong mảng theo yêu cầu: chẵn vàng, lẻ trắng
*/___/* Bài 289: Xuất mảng: chẵn nằm trên 1 mảng, lẻ nằm trên hàng tiếp theo
*/___/* Bài 290: Đảo ngược thứ tự số chẵn và lẻ trong mảng nhưng giữ vị trí tương đối */___/* Bài 291: Biến đổi mảng bằng cách thay giá trị max = giá trị min và ngược lại */___/* Bài 292: Biến đổi mảng số thực bằng cách thay tất cả phần tử trong mảng bằng số nguyên gần nó nhất (giống làm tròn)

Kỹ thuật xử lý mảng con
*/___/* Bài 293: Liệt kê tất cả các mảng con
*/___/* Bài 294: Liệt kê mảng con có độ dài lớn hơn 2 phần tử
*/___/* Bài 295: Liệt kê dãy con tăng dần
*/___/* Bài 296: Liệt kê dãy con tăng và chứa giá trị lớn nhất
*/___/* Bài 297: Tính tổng từng mảng con tăng
*/___/* Bài 298: Đếm mảng con tăng có độ dài lớn hơn 1
*/___/* Bài 299: Liệt kê dãy con toàn dương và có độ dài lớn hơn 1 */___/* Bài 300: Đếm mảng con giảm
*/___/* Bài 301: Cho biết mảng a có phải là mảng con của mảng b không */___/* Bài 302: Đếm số lần xuất hiện của mảng a trong mảng b
*/___/* Bài 303: Tìm dãy con toàn dương dài nhất
*/___/* Bài 304(*): Cho mảng a, số nguyên M. Tìm 1 mảng con sao cho tổng các phần tử bằng M
*/___/* Bài 305(*): Tìm dãy con toàn dương có tổng lớn nhất
*/___/* Bài 306: Tìm mảng con có tổng lớn nhất

Xây dựng mảng
*/___/* Bài 307: Tạo mảng b chỉ chứa giá trị lẻ từ mảng a */___/* Bài 308: Tạo mảng b chỉ chứa giá trị âm từ mảng a
*/___/* Bài 309: Tạo mảng b sao cho b = tổng các phần tử lân cận với a trong mảng a
*/___/* Bài 310: Tạo mảng b chỉ chứa số nguyên tố từ mảng a
Chương 6:
*/___/* Bài 311 + 313: Viết hàm nhập xuất ma trận số nguyên */___/* Bài 312 + 314: Viết hàm nhập xuất ma trận số thực
*/___/* Bài 315: Viết hàm tìm giá trị lớn nhất trong ma trận số thực
*/___/* Bài 316: Viết hàm kiểm tra trong ma trận số nguyên có tồn tại giá trị chẵn nhỏ hơn 2015?
*/___/* Bài 317: Viết hàm đếm số lượng số nguyên tố trong ma trận số nguyên */___/* Bài 318: Viết hàm tính tổng các giá trị âm trong ma trận số thực
*/___/* Bài 319: Viết hàm sắp xếp ma trận các số thực tăng dần từ trên xuống dưới và
từ trái sang phải

Kỹ thuật tính toán
*/___/* Bài 320: Tính tổng các số dương trong ma trận các số thực
*/___/* Bài 321: Tính tích các giá trị lẻ trong ma trận các số nguyên
*/___/* Bài 322: Tính tổng các giá trị trên 1 dòng trong ma trận các số thực
*/___/* Bài 323: Tính tích các giá trị dương trên 1 cột trong ma trận các số thực */___/* Bài 324: Tính tổng các giá trị dương trên 1 dòng trong ma trận các số thực */___/* Bài 325: Tính tích các số chẵn trên 1 cột trong ma trận các số nguyên
*/___/* Bài 326: Tính trung bình cộng các số dương trong ma trận các số thực
*/___/* Bài 327: Tính tổng các giá trị nằm trên biên của ma trận
*/___/* Bài 328: Tính trung bình nhân các số dương trong ma trận các số thực
*/___/* Bài 329: Hãy biến đổi ma trận bằng cách thay các giá trị âm bằng trị tuyệt đối của nó
*/___/* Bài 330: Hãy biên đổi ma trận số thực bằng cách thay các giá trị bằng giá trị
nguyên gần nó nhất
*/___/* Bài 331: Tính tổng các giá trị trên 1 dòng của ma trận các số thực */___/* Bài 332: Tính tổng các giá trị lẻ trên 1 cột của ma trận các số nguyên */___/* Bài 333: Tính tổng các số hoàn thiện trong ma trận các số nguyên

Kỹ thuật đếm
*/___/* Bài 334: Viết hàm đếm số lượng số dương trong ma trận các số thực
*/___/* Bài 335: Đếm số lượng số nguyên tố trong ma trận các số nguyên
*/___/* Bài 336: Đếm tần suất xuất hiện của 1 giá trị x trong ma trận các số thực
*/___/* Bài 337: Đếm số chữ số trong ma trận các số nguyên dương
*/___/* Bài 338: Đếm số lượng số dương trên 1 hàng trong ma trận các số thực
*/___/* Bài 339: Đếm số lượng số hoàn thiện trên 1 hàng trong ma trận các số nguyên */___/* Bài 340: Đếm số lượng số âm trên 1 cột trong ma trận các số thực
*/___/* Bài 341: Đếm số lượng số dương trên biên trong ma trận các số thực
*/___/* Bài 342(*): Đếm số lượng phần tử cực đại trong ma trận các số thực. Một phần tử được gọi là cực đại khi nó lớn hơn các phần tử xung quanh
*/___/* Bài 343(*): Đếm số lượng phần tử cực trị trong ma trận các số thực. Một phần tử được gọi là cực trị khi nó lớn hớn các phần tử xung quanh hoặc nhỏ hơn các phần tử xung quanh
*/___/* Bài 344(*): Đếm số lượng giá trị có trong ma trận các số thực. Chú ý: Nếu có k

phần tử (k >= 1) trong ma trận bằng nhau thì ta chỉ tính là 1
*/___/* Bài 345(*): Tính tổng các phần tử cực trị trong ma trận các số thực. Một phần tử được gọi là cực trị khi nó lớn hớn các phần tử xung quanh hoặc nhỏ hơn các phần tử xung quanh
*/___/* Bài 346(*): Đếm số lượng giá trị “Hoàng Hậu” trên ma trận. Một phần tử được gọi là Hoàng Hậu khi nó lớn nhất trên dòng, trên cột và 2 đường chéo đi qua nó */___/* Bài 347(*): Đếm số lượng giá trị “Yên Ngựa” trên ma trận. Một phần tử được gọi là Yên Ngựa khi nó lớn nhất trên dòng và nhỏ nhất trên cột

Kỹ thuật đặt cờ hiệu
*/___/* Bài 348: Kiểm tra ma trận có tồn tại số dương hay không
*/___/* Bài 349: Kiểm tra ma trận có tồn tại số hoàn thiện hay không */___/* Bài 350: Kiểm tra ma trận có tồn tại số lẻ hay không
*/___/* Bài 351: Kiểm tra ma trận có toàn dương hay không
*/___/* Bài 352: Kiểm tra một hàng ma trận có tăng dần hay không */___/* Bài 353: Kiểm tra một cột ma trận có giảm dần hay không
*/___/* Bài 354: Kiểm tra các giá trị trong ma trận có giảm dần theo dòng và cột hay không
*/___/* Bài 355: Liệt kê các dòng toàn âm trong ma trận các số thực
*/___/* Bài 356: Liệt kê chỉ số các dòng chứa toàn giá trị chẵn trong ma trận các số
nguyên
*/___/* Bài 357: Liệt kê các dòng có chứa số nguyên tố trong ma trận các số nguyên */___/* Bài 358: Liệt kê các dòng có chứa giá trị chẵn trong ma trận các số nguyên */___/* Bài 359: Liệt kê các dòng có chứa giá trị âm trong ma trận các số thực
*/___/* Bài 360: Liệt kê các cột trong ma trận các số nguyên có chứa số chính phương */___/* Bài 361: Liệt kê các dòng trong ma trận các số thực thỏa mãn đồng thời các điều kiện sau: dòng có chứa giá trị âm, giá trị 0 và giá trị dương
*/___/* Bài 362: Liệt kê các dòng giảm dần trong ma trận
*/___/* Bài 363: Liệt kê các cột tăng dần trong ma trận
*/___/* Bài 364: Cho 2 ma trận A và B. Kiểm tra xem ma trận A có là ma trận con của
ma trận B hay không
*/___/* Bài 365: Cho 2 ma trận A và B. Đếm số lần xuất hiện của ma trận A trong ma
trận B


Kỹ thuật đặt lính canh
*/___/* Bài 366: Tìm số chẵn đầu tiên trong ma trận
*/___/* Bài 367: Tìm max trong ma trận
*/___/* Bài 368: Tìm giá trị lớn thứ 2 trong ma trận */___/* Bài 369: Tìm số dương đầu tiên trong ma trận */___/* Bài 370: Tìm giá trị âm lớn nhất trong ma trận */___/* Bài 371: Liệt kê các dòng có chứa max
*/___/* Bài 372: Tìm giá trị lớn nhất trên 1 dòng */___/* Bài 373: Tìm giá trị nhỏ nhất trên 1 cột */___/* Bài 374: Tìm số nguyên tố đầu tiên
*/___/* Bài 375: Tìm số chẵn lớn nhất
*/___/* Bài 376: Tìm số dương nhỏ nhất
*/___/* Bài 377: Tìm số nguyên tố lớn nhất
*/___/* Bài 378: Tìm 1 chữ số xuất hiện nhiều nhất
*/___/* Bài 379: Đếm số lượng min
*/___/* Bài 380: Đếm số lượng chẵn nhỏ nhất */___/* Bài 381: Tìm giá trị xuất hiện nhiều nhất */___/* Bài 382: Tìm số chính phương lớn nhất */___/* Bài 383: Tìm số hoàn thiện nhỏ nhất
*/___/* Bài 384: Tìm các chữ số xuất hiện nhiều nhất trong ma trận
*/___/* Bài 385: Liệt kê các dòng có tổng lớn nhất
*/___/* Bài 386: Liệt kê các cột có tổng nhỏ nhất
*/___/* Bài 387: Liệt kê các dòng có nhiều số chẵn nhất
*/___/* Bài 388: Liệt kê các dòng có nhiều số nguyên tố nhất
*/___/* Bài 389: Liệt kê các dòng có nhiều số hoàn thiện nhất
*/___/* Bài 390(*): Liệt kê các cột nhiều chữ số nhất trong ma trận các số nguyên */___/* Bài 391(*): Tìm ma trận con có tổng lớn nhất

Kỹ thuật xử lý ma trận
*/___/* Bài 392: Hoán vị 2 dòng trên ma trận
*/___/* Bài 393: Hoán vị 2 cột trên ma trận

*/___/* Bài 394: Dịch xuống xoay vòng các hàng trong ma trận */___/* Bài 395: Dịch lên xoay vòng các hàng trong ma trận */___/* Bài 396: Dịch trái xoay vòng các cột trong ma trận
*/___/* Bài 397: Dịch phải xoay vòng các cột trong ma trận
*/___/* Bài 398: Dịch phải xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên ma trận
*/___/* Bài 399: Dịch trái xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên ma trận
*/___/* Bài 400: Xóa 1 dòng trong ma trận */___/* Bài 401: Xóa 1 cột trong ma trận */___/* Bài 402: Xoay ma trận 1 góc 90 độ
*/___/* Bài 403: Xoay ma trận 1 góc 180 độ
*/___/* Bài 404: Xoay ma trận 1 góc 270 độ
*/___/* Bài 405: Chiếu gương ma trận theo trục dọc
*/___/* Bài 406: Chiếu gương ma trận theo trục ngang

Sắp xếp ma trận
*/___/* Bài 407: Viết hàm sắp xếp các phần tử trên 1 dòng tăng dần từ trái sang phải */___/* Bài 408: Viết hàm sắp xếp các phần tử trên 1 dòng giảm dần từ trái sang phải */___/* Bài 409: Viết hàm sắp xếp các phần tử trên 1 cột tăng dần từ trên xuống dưới */___/* Bài 410: Viết hàm sắp xếp các phần tử trên 1 cột giảm dần từ trên xuống dưới */___/* Bài 411: Viết hàm xuất các giá trị chẵn trong ma trận các số nguyên theo thứ tự giảm dần
*/___/* Bài 412: Viết hàm xuất các số nguyên tố trong ma trận các số nguyên theo thứ tự tăng dần
*/___/* Bài 413: Viết hàm sắp xếp các phần tử trong ma trận theo yêu cầu sau:
–	Dòng có chỉ số chẵn tăng dần
–	Dòng có chỉ số lẻ giảm dần
*/___/* Bài 414: Viết hàm sắp xếp các phần tử trong ma trận theo yêu cầu sau:
–	Cột có chỉ số chẵn giảm dần từ trên xuống
–	Cột có chỉ số lẻ tăng dần từ trên xuống
*/___/* Bài 415 Sắp xếp ptử tăng dần theo hàng và cột: Dùng 2 phương pháp: sử dụng mảng phụ và ko dùng mảng phụ

*/___/* Bài 416: Sắp xếp ptử dương tăng dần theo cột và dòng. Dùng 2 phương pháp:
Sử dụng mảng phụ và ko sử dụng mảng phụ
*/___/* Bài 417: Sắp xếp ptử chẵn giảm dần theo cột và dòng. Dùng 2 phương pháp:
Sử dụng mảng phụ và ko sử dụng mảng phụ
*/___/* Bài 418: Sắp xếp âm tăng dần, dương giảm dần, 0 giữ nguyên */___/* Bài 419: Sắp xếp chẵn tăng, lẻ giảm
*/___/* Bài 420: Sắp xếp các giá trị nằm trên biên ma trận tăng dần
*/___/* Bài 421: Sắp xếp các giá trị dương nằm trên biên ma trận tăng dần
*/___/* Bài 422: Sắp xếp các dòng dựa vào: tổng các ptử trong 1 dòng: sắp tăng dần. */___/* Bài 423: Sắp xếp giá trị các ptử trong ma trận tăng dần theo dạng xoắn ốc (ma trận xoắn ốc)
*/___/* Bài 424: Sắp xếp giá trị các ptử trong ma trận tăng dần theo dạng ziczac */___/* Bài 425: Xuất các giá trị âm giảm dần(ma trận không thay đổi sau khi xuất)

Xây dựng ma trận
*/___/* Bài 426: Cho ma trận A. Hãy tạo ma trận B, B[j] = abs(A[j])
*/___/* Bài 427: Cho ma trận A. Hãy tạo ma trận B, B[j] = lớn nhất dòng i, cột j của A
*/___/* Bài 428: Cho ma trận A. Hãy tạo ma trận B, B[j] = số lượng ptử dương xung
quanh A[j]
Chương 7
*/___/* Bài 429 + */___/* Bài 431: Viết hàm nhập, xuất ma trận vuông các số nguyên
–Hàm duyệt các phần tử trên đường chéo chính
–Hàm duyệt các phần tử thuộc tam giác trên đường chéo chính
–Hàm duyệt các phần tử thuộc tam giác dưới đường chéo chính
–Hàm duyệt các phần tử trên đường chéo phụ
–Hàm duyệt các phần tử thuộc tam giác trên đường chéo phụ
–Hàm duyệt các phần tử thuộc tam giác dưới đường chéo phụ
*/___/* Bài 430 + */___/* Bài 432: Viết hàm nhập, xuất ma trận vuông các số thực
*/___/* Bài 433: Viết hàm tìm giá trị lớn nhất trong ma trận vuông các số thực
*/___/* Bài 434: Viết hàm kiểm tra trong ma trận vuông các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2015 hay không
*/___/* Bài 435: Viết hàm đếm số lượng số nguyên tố trong ma trận vuông các số
nguyên

*/___/* Bài 436: Viết hàm tính tổng các giá trị âm trong ma trận vuông các số thực */___/* Bài 437: Viết hàm sắp xếp ma trận vuông các số thực tăng dần từ trên xuống dưới và từ trái sang phải
Tính toán
*/___/* Bài 438: Tổng phần tử thuộc ma trận tam giác trên (ko tính đường chéo) trong ma trận vuông
*/___/* Bài 439: Tổng phần tử thuộc ma trận tam giác dưới (ko tính đường chéo) trong ma trận vuông
*/___/* Bài 440: Tổng phần tử trên đường chéo chính */___/* Bài 441: Tổng phần tử trên đường chéo phụ */___/* Bài 442: Tổng phần tử chẵn nằm trên biên Kỹ thuật đặt lính canh
*/___/* Bài 443: Tìm max trong ma trận tam giác trên */___/* Bài 444: Tìm min trong ma trận tam giác dưới */___/* Bài 445: Tìm max trên đường chéo chính
*/___/* Bài 446: Tìm max trên đường chéo phụ
*/___/* Bài 447: Tìm max nguyên tố trong ma trận
*/___/* Bài 448: Tìm 2 giá trị gần nhau nhất
*/___/* Bài 449: * Cho ma trận vuông A(n x n). Hãy tìm ma trận vuông B(k x k) sao cho tổng các giá trị trên ma trận vuông này là lớn nhất
Kỹ thuật đếm
*/___/* Bài 450: Đếm số lượng cặp giá trị đối xứng nhau qua đường chéo chính */___/* Bài 451: Đếm số lượng dòng giảm
*/___/* Bài 452: Đếm phần tử cực đại
*/___/* Bài 453: Đếm giá trị dương trên đường chéo chính */___/* Bài 454: Đếm số âm trên đường chéo phụ
*/___/* Bài 455: Đếm số chẵn trong ma trận tam giác trên
Kỹ thuật đặt cờ hiệu
*/___/* Bài 456: Kiểm tra đường chéo chính có tăng dần hay ko */___/* Bài 457: Kiểm tra ma trận có đối xứng wa chéo chính ko */___/* Bài 458: Kiểm tra ma trận có đối xứng wa chéo phụ ko
*/___/* Bài 459: Kiểm tra ma trận có phải là ma phương ko? Ma phương là khi tổng ptử
trên các dòng, cột và 2 chéo chính phụ bằng nhau


Sắp xếp
*/___/* Bài 460: Sắp chéo chính tăng dần */___/* Bài 461: Sắp chéo phụ giảm dần */___/* Bài 462: Hoán vị 2 dòng
*/___/* Bài 463: Hoán vị 2 cột
*/___/* Bài 464: sắp các dòng tăng dần theo tổng dòng
*/___/* Bài 465: Đưa chẵn về đầu ma trận vuông
*/___/* Bài 466: * Ma trận vuông A(n x n) với n >=3. Sắp tam giác trên tăng dần từ trên xuống dưới và từ trái sang phải
*/___/* Bài 467: * Ma trận vuông A với n>=3. Sắp tam giác dưới giảm dần từ trên xuống dưới và từ trái sang phải
*/___/* Bài 468: * Xây dựng ma phương A

Các phép toán trên ma trận
*/___/* Bài 469: Tổng 2 ma trận
*/___/* Bài 470: Hiệu 2 ma trận
*/___/* Bài 471: Tích 2 ma trận
*/___/* Bài 472: * Ma trận nghịch đảo */___/* Bài 473: * Định thức của ma trận
*/___/* Bài 474: * Tạo ma phương bậc n x n
Chương 8

*/___/* Bài 475: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm phân số trong toán học
và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 476: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và
định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 477: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng
Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 478: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong không gian Oxyz và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 479: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đơn thức P(x) = ax^n trong toán học và định nghĩa và định nghĩa hàm nhập, hàm xuất cho kiểu dữ

liệu này
*/___/* Bài 480: Hãy khai báo kiểu dữ liệu để biểu diễn khái niệm đa thức 1 biến trong toán học:
P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 và định nghĩa hàm nhập và hàm xuất cho kiểu dữ liệu này
*/___/* Bài 481: Hãy khai báo kiểu dữ liệu biểu diễn ngày trong thế giới thực và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 482: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường thẳng ax + by + c = 0 trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 483: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường tròn trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
*/___/* Bài 484: Viết chương trình nhập tọa độ tâm và bán kính của 1 đường tròn trong
mặt phẳng Oxy. Tính diện tích và chu vi của nó và xuất ra kết quả
*/___/* Bài 485: Viết chương trình nhập tọa độ 3 đỉnh của 1 tam giác trong mặt phẳng
Oxy. Tính diện tích, chu vi và tọa độ trọng tâm của tam giác và xuất ra kết quả
– Đơn thức
*/___/* Bài 486: Tính tích 2 đơn thức
*/___/* Bài 487: Tính đạo hàm cấp 1 đơn thức */___/* Bài 488: Tính thương 2 đơn thức
*/___/* Bài 489: Tính đạo hàm cấp k đơn thức
*/___/* Bài 490: Tính giá trị đơn thức tại vị trí x=x0
*/___/* Bài 491: Định nghĩa toán tử (operator *) cho 2 đơn thức */___/* Bài 492: Định nghĩa toán tử (operator /) cho 2 đơn thức SourceCode
– Đa thức
*/___/* Bài 493: Tính hiệu 2 đa thức */___/* Bài 494: Tính tổng 2 đa thức */___/* Bài 495: Tính tích 2 đa thức */___/* Bài 496: Tính thương 2 đa thức
*/___/* Bài 497: Tính đa thức dư của phép chia đa thức thứ nhất cho đa thức thứ hai */___/* Bài 498: Tính đạo hàm cấp 1 của đa thức

*/___/* Bài 499: Tính đạo hàm cấp k của đa thức
*/___/* Bài 500: Tính giá trị của đa thức tại vị trí x = x0
*/___/* Bài 501: Định nghĩa toán tử cộng (operator +) cho hai đa thức */___/* Bài 502: Định nghĩa toán tử trừ (operator -) cho hai đa thức */___/* Bài 503: Định nghĩa toán tử nhân (operator *) cho hai đa thức
*/___/* Bài 504: Định nghĩa toán tử thương (operator /) cho hai đa thức */___/* Bài 505: Tìm nghiệm của đa thức trong đoạn [a, b] cho trước SourceCode (còn 1 số câu chưa test)
– Phân số
*/___/* Bài 506: rút gọn phân số
*/___/* Bài 507: Tính tổng 2 phân số */___/* Bài 508: Tính hiệu 2 phân số */___/* Bài 509: Tính tích 2 phân số */___/* Bài 510: Tính thương 2 phân số
*/___/* Bài 511: Kiểm tra phân số tối giản */___/* Bài 512: Qui đồng phân số
*/___/* Bài 513: Kiểm tra phân số dương */___/* Bài 514: Kiểm tra phân số âm
*/___/* Bài 515: So sánh 2 phân số: hàm trả về 1 trong 3 giá trị: 0,-1,1 */___/* Bài 516: Định nghĩa toán tử operator + cho 2 phân số
*/___/* Bài 517: Định nghĩa toán tử operator – cho 2 phân số */___/* Bài 518: Định nghĩa toán tử operator * cho 2 phân số */___/* Bài 519: Định nghĩa toán tử operator / cho 2 phân số */___/* Bài 520: Định nghĩa toán tử operator ++ cho 2 phân số */___/* Bài 521: Định nghĩa toán tử operator — cho 2 phân số SourceCode
– Hỗn số
*/___/* Bài 522: Khai báo dữ liệu để biểu diễn thông tin của một hỗn số */___/* Bài 523 Nhập hỗn số
*/___/* Bài 524 Xuất hỗn số */___/* Bài 525 Rút gọn hỗn số
*/___/* Bài 526 Tính tổng 2 hỗn số */___/* Bài 527 Tính hiệu 2 hỗn số

*/___/* Bài 528 Tính tích 2 hỗn số
*/___/* Bài 529 Tính thương 2 hỗn số */___/* Bài 530 Kiểm tra hỗn số tối giản */___/* Bài 531 Qui đồng 2 hỗn số SourceCode
– Số phức
*/___/* Bài 532: Khai báo biểu diễn thông tin số phức */___/* Bài 533: Nhập số phức
*/___/* Bài 534: Xuất số phức
*/___/* Bài 535: Tính tổng 2 số phức */___/* Bài 536: Tính hiệu 2 số phức */___/* Bài 537: Tính tích 2 số phức */___/* Bài 538: Tính thương 2 số phức
*/___/* Bài 539: Tính lũy thừa bậc n số phức
SourceCode
– Điểm trong mặt phẳng Oxy
*/___/* Bài 540: khai báo dữ liệu điểm OXY
*/___/* Bài 541: Nhập tọa độ điểm trong mặt phẳng */___/* Bài 542: Xuất tọa độ điểm trong mặt phẳng */___/* Bài 543: Tính khoảng cách giữa 2 điểm
*/___/* Bài 544: Tính khoảng cách 2 điểm theo phương Ox */___/* Bài 545: Tính khoảng cách 2 điểm theo phương Oy */___/* Bài 546: Tìm tọa độ điểm đối xứng qua gốc tọa độ */___/* Bài 547: Tìm điểm đối xứng qua trục hoành
*/___/* Bài 548: Tìm điểm đối xứng qua trục tung
*/___/* Bài 549: Tìm điểm đối xứng qua đường phân giác thứ 1 (y=x) */___/* Bài 550: Tìm điểm đối xứng qua đường phân giác thứ 2 (y=-x) */___/* Bài 551: Kiểm tra điểm thuộc phần tư thứ 1 ko?
*/___/* Bài 552: Kiểm tra điểm thuộc phần tư thứ 2 ko? */___/* Bài 553: Kiểm tra điểm thuộc phần tư thứ 3 ko? */___/* Bài 554: Kiểm tra điểm thuộc phần tư thứ 4 ko? SourceCode

– Điểm trong không gian Oxyz
*/___/* Bài 555: Khai báo kiểu dữ liệu biểu diễn tọa độ điểm trong không gian Oxyz */___/* Bài 556: Nhập tọa độ điểm trong không gian Oxyz
*/___/* Bài 557: Xuất tọa độ điểm theo định dạng (x, y, z)
*/___/* Bài 558: Tính khoảng cách giữa 2 điểm trong không gian
*/___/* Bài 559: Tính khoảng cách giữa 2 điểm trong không gian theo phương x */___/* Bài 560: Tính khoảng cách giữa 2 điểm trong không gian theo phương y */___/* Bài 561: Tính khoảng cách giữa 2 điểm trong không gian theo phương z */___/* Bài 562: Tìm tọa độ điểm đối xứng qua gốc tọa độ
*/___/* Bài 563: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxy */___/* Bài 564: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxz */___/* Bài 565: Tìm tọa độ điểm đối xứng qua mặt phẳng Oyz SourceCode
– Đường tròn trong mặt phẳng Oxy
*/___/* Bài 566: Khai báo kiểu dữ liệu để biểu diễn đường tròn */___/* Bài 567: Nhập đường tròn
*/___/* Bài 568: Xuất đường tròn theo định dạng ((x, y), r) */___/* Bài 569: Tính chu vi đường tròn
*/___/* Bài 570: Tính diện tích đường tròn
*/___/* Bài 571: Xét vị trí tương đối giữa 2 đường tròn( không cắt nhau, tiếp xúc, cắt
nhau)
*/___/* Bài 572: Kiểm tra 1 tọa độ điểm có nằm trong đường tròn hay không
*/___/* Bài 573: Cho 2 đường tròn. Tính diện tích phần mặt phẳng bị phủ bởi 2 đường tròn đó
SourceCode
– Hình cầu trong không gian Oxyz
*/___/* Bài 574: Khai báo kiểu dữ liệu để biểu diễn hình cầu trong không gian Oxyz */___/* Bài 575: Nhập hình cầu
*/___/* Bài 576: Xuất hình cầu theo định dạng ((x, y, z), r) */___/* Bài 577: Tính diện tích xung quanh hình cầu
*/___/* Bài 578: Tính thể tích hình cầu
*/___/* Bài 579: Xét vị trí tương đối giữa 2 hình cầu(không cắt nhau, tiếp xúc, cắt
nhau)

*/___/* Bài 580: Kiểm tra 1 tọa độ điểm có nằm bên trong hình cầu hay không
SourceCode
– Tam giác trong mặt phẳng Oxy
*/___/* Bài 581: Khai báo kiểu dữ liệu để biểu diễn tam giác trong mặt phẳng Oxy */___/* Bài 582: Nhập tam giác
*/___/* Bài 583: Xuất tam giác theo định dạng ((x1, y1); (x2, y2); (x3, y3))
*/___/* Bài 584: Kiểm tra tọa độ 3 đỉnh có thật sự lập thành 3 đỉnh của 1 tam giác
không
*/___/* Bài 585: Tính chu vi tam giác
*/___/* Bài 586: Tính diện tích tam giác
*/___/* Bài 587: Tìm tọa độ trọng tâm tam giác
*/___/* Bài 588: Tìm 1 đỉnh trong tam giác có hoành độ lớn nhất */___/* Bài 589: Tìm 1 đỉnh trong tam giác có tung độ nhỏ nhất
*/___/* Bài 590: Tính tổng khoảng cách từ điểm P(x, y) tới 3 đỉnh của tam giác */___/* Bài 591: Kiểm tra 1 tọa độ điểm có nằm trong tam giác hay không
*/___/* Bài 592: Hãy cho biết dạng của tam giác (đều, vuông, vuông cân, cân, thường)
SourceCode
– Ngày
*/___/* Bài 593: Khai báo kiểu dữ liệu để biểu diễn ngày
*/___/* Bài 594: Nhập ngày
*/___/* Bài 595: Xuất ngày theo định dạng (ng/th/nm) */___/* Bài 596: Kiểm tra năm nhuận
*/___/* Bài 597: Tính số thứ tự ngày trong năm
*/___/* Bài 598: Tính số thứ tự ngày kể từ ngày 1/1/1
*/___/* Bài 599: Tìm ngày khi biết năm và số thứ tự của ngày trong năm */___/* Bài 600: Tìm ngày khi biết số thứ tự ngày kể từ ngày 1/1/1
*/___/* Bài 601: Tìm ngày kế tiếp
*/___/* Bài 602: Tìm ngày hôm qua
*/___/* Bài 603: Tìm ngày kế đó k ngày */___/* Bài 604: Tìm ngày trước đó k ngày */___/* Bài 605: Khoảng cách giữa 2 ngày

*/___/* Bài 606: So sánh 2 ngày
Tính thứ của ngày bất kỳ trong năm(Dùng CT Zeller)
SourceCode
*/___/* Bài 607: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của 1 tỉnh (TINH). Biết rằng một tỉnh gồm những thành phần sau:
-Mã tỉnh: Kiểu số nguyên 2 byte
-Tên tỉnh: Chuỗi tối đa 30 ký tự
-Diện tích: Kiểu số thực
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 608: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một hộp sữa
(HOPSUA). Biết rằng một hộp sữa gồm các thành phần sau:
-Nhãn hiệu: chuỗi tối đa 20 ký tự
-Trọng lượng: kiểu số thực
-Hạn sử dụng: Kiểu dữ liệu Ngày (NGAY)
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode

*/___/* Bài 609: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của 1 vé xem phim (VE). Biết rằng 1 vé xem phim gồm những thành phần sau:
–	Tên phim: Chuỗi tối đa 20 ký tự
–	Giá tiền: kiểu số nguyên 4 byte
–	Xuất chiếu: kiểu thời gian (THOIGIAN)
–	Ngày xem: kiểu dữ liệu ngày (NGAY)
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 610: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một mặt hàng (MATHANG). Biết rằng một mặt hàng gồm những thành phần sau:
–	Tên mặt hàng: chuỗi tối đa 20 ký tự
–	Đơn giá: kiểu số nguyên 4 byte
–	Số lượng tồn: kiểu số nguyên 4 byte
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode

*/___/* Bài 611: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một chuyến bay.
Biết rằng một chuyến bay gồm những thành phần sau:
–	Mã chuyến bay: chuỗi tối đa 5 ký tự
–	Ngày bay: kiểu dữ liệu ngày
–	Giờ bay: kiểu thời gian
–	Nơi đi: chuỗi tối đa 20 ký tự
–	Nơi đến: chuỗi tối đa 20 ký tự
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 612: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một cầu thủ. Biết rằng một cầu thủ gồm những thành phần sau:
–	Mã cầu thủ: chuỗi tối đa 10 ký tự
–	Tên cầu thủ: chuỗi tối đa 30 ký tự
–	Ngày sinh: kiểu dữ liệu ngày
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode

*/___/* Bài 613: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một đội bóng. (DOIBONG). Biết rằng một đội bóng gồm những thành phần sau:
-Mã đội bóng: chuỗi tối đa 5 ký tự
-Tên đội bóng: chuỗi tối đa 30 ký tự
-Danh sách các cầu thủ: mảng 1 chiều các cầu thủ (tối đa 30 phần tử) Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 614: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một nhân viên (NHANVIEN). Biết rằng một nhân viên gồm những thành phần sau:
–	Mã nhân viên: chuỗi tối đa 5 ký tự
–	Tên nhân viên: chuỗi tối đa 30 ký tự
–	Lương nhân viên: kiểu số thực
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode

*/___/* Bài 615: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một thí sinh

(THISINH). Biết rằng một thí sinh gồm những thành phần sau:
–	Mã thí sinh: chuỗi tối đa 5 ký tự
–	Họ tên thí sinh: chuỗi tối đa 30 ký tự
–	Điểm toán: kiểu số thực
–	Điểm lý: kiểu số thực
–	Điểm hóa: kiểu số thực
–	Điểm tổng cộng: kiểu số thực
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 616: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một luận văn
(LUANVAN). Biết rằng một luận văn gồm những thành phần sau:
–	Mã luận văn: chuỗi tối đa 10 ký tự
–	Tên luận văn: chuỗi tối đa 100 ký tự
–	Họ tên sinh viên thực hiện: chuỗi tối đa 30 ký tự
–	Họ tên giảng viên hướng dẫn: chuỗi tối đa 30 ký tự
–	Năm thực hiện: kiểu số nguyên 2 byte
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 617: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một học sinh (HOCSINH). Biết rằng một lớp học gồm những thành phần sau:
–	Tên học sinh: chuỗi tối đa 30 ký tự
–	Điểm toán: kiểu số nguyên 2 byte
–	Điểm văn: kiểu số nguyên 2 byte
–	Điểm trung bình: kiểu số thực
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 618: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một lớp học
(LOPHOC). Biết rằng một lớp học gồm những thành phần sau:
–	Tên lớp: chuỗi tối đa 30 ký tự
–	Sĩ số: kiểu số nguyên 2 byte
–	Danh sách các học sinh trong lớp ( tối đa 50 học sinh) Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này SourceCode

*/___/* Bài 619: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một sổ tiết kiệm
(SOTIETKIEM). Biết rằng một sổ tiết kiệm gồm những thành phần sau:
–	Mã sổ: chuỗi tối đa 5 ký tự
–	Loại tiết kiệm: chuỗi tối đa 10 ký tự
–	Họ tên khách hàng: chuỗi tối đa 30 ký tự
–	Chứng minh nhân dân: kiểu số nguyên 4 byte
–	Ngày mở sổ: kiểu dữ liệu ngày
–	Số tiền gửi: kiểu số thực
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
*/___/* Bài 620: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một đại lý (DAILY). Biết rằng một đại lý gồm những thành phần sau:
–	Mã đại lý: chuỗi tối đa 5 ký tự
–	Tên đại lý: chuỗi tối đa 30 ký tự
–	Điện thoại: kiểu số nguyên 4 byte
–	Ngày tiếp nhận: kiểu dữ liệu ngày
–	Địa chỉ: chuỗi tối đa 50 ký tự
–	E-Mail: chuỗi tối đa 50 ký tự
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
SourceCode
Chương 11: Con trỏ
– Con trỏ cơ bản
+ Khai báo và khởi tạo
+ Tham số là con trỏ
+ Cần nhớ các toán tử của con trỏ
+ Kích thước của con trỏ
– Con trỏ và mảng 1 chiều
+ Nhập xuất
+ Thêm, Xóa, Cộng, Trừ
+ Liệt kê hoán vị
+ */___/* Bài tập tổng hợp
–Con trỏ nâng cao
+ Thay đổi con trỏ sau khi ra khỏi hàm

+ Con trỏ vô kiểu
– Con trỏ và mảng 2 chiều
+ Nhập xuất
+ Thêm xóa
Chương 12: Danh sách liên kết
– Khai báo
*/___/* Bài 778: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn tổng quát */___/* Bài 779: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các phân số */___/* Bài 780: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các số phức
– Khởi tạo danh sách liên kết
*/___/* Bài 781: Viết hàm khởi tạo danh sách liên kết đơn
–Tạo node
*/___/* Bài 782: Viết hàm tạo node trong danh sách liên kết đơn với thông tin được biết trước ở dạng trừu tượng
*/___/* Bài 783: Viết hàm tạo node trong danh sách liên kết đơn các phân số
–	Thêm 1 node vào đầu danh sách
Viết hàm thêm 1 node vào đầu danh sách liên kết đơn
–	Duyệt danh sách liên kết
*/___/* Bài 784: Viết hàm duyệt danh sách liên kết đơn ở dạng trừu tượng
*/___/* Bài 785: Viết hàm xuất danh sách liên kết đơn các phân số
–	Nhập danh sách liên kết
*/___/* Bài 786: Viết hàm nhập danh sách liên kết ở dạng trừu tượng
–	Chương trình minh họa
*/___/* Bài 787: Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập danh sách liên kết đơn các số nguyên
b.	Xuất danh sách liên kết đơn các số nguyên
c.	Tính tổng các node trong DSLK
SourceCode

Các */___/* Bài tập lý thuyết
*/___/* Bài 788: Kiểm tra danh sách liên kết có rỗng không */___/* Bài 789: Thêm một node vào cuối danh sách
*/___/* Bài 790: Thêm một node p vào sau node q trong danh sách

*/___/* Bài 791: Thêm một node p vào trước node q trong danh sách
*/___/* Bài 792: Lấy node đầu tiên trong danh sách ra khỏi danh sách liên kết

Các */___/* Bài tập khai báo danh sách
*/___/* Bài 793: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các số
nguyên
*/___/* Bài 794: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các số thực */___/* Bài 795: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các tọa độ điểm trong mặt phẳng Oxy
*/___/* Bài 796: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các học sinh.
Biết rằng học sinh gồm những thành phần thông tin như sau:
-Họ tên: tối đa 30 ký tự
-Điểm toán: kiểu số nguyên
-Điểm văn: kiểu số nguyên
-Điểm trung bình: kiểu số thực
SourceCode

*/___/* Bài 797: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các thí sinh.
Giả sử thí sinh gồm những thành phần thông tin như sau:
–	Mã thí sinh: tối đa 5 ký tự
–	Họ tên: tối đa 30 ký tự
–	Điểm toán: kiểu số thực
–	Điểm lý: kiểu số thực
–	Điểm hóa: kiểu số thực
–	Điểm tổng cộng: kiểu số thực
SourceCode
*/___/* Bài 798: Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các phòng trong khách sạn (PHONG). Giả sử phòng khách sạn gồm những thông tin như sau:
–	Mã phòng: tối đa 5 ký tự
–	Tên phòng: tối đa 30 ký tự
–	Đơn giá thuê: kiểu số thực
–	Số lượng giường: kiểu số nguyên

–	Tình trạng giường: 0 rảnh 1 bận
SourceCode

Tạo NODE cho danh sách liên kết đơn
*/___/* Bài 799: Viết hàm tạo node trong danh sách liên kết đơn các số phức */___/* Bài 800: Viết hàm tạo node trong danh sách liên kết đơn các số nguyên */___/* Bài 801: Viết hàm tạo node trong danh sách liên kết đơn các số thực
*/___/* Bài 802: Viết hàm tạo node trong danh sách liên kết đơn các tọa độ điểm trong
mặt phẳng Oxy
*/___/* Bài 803: Viết hàm tạo node trong danh sách liên kết đơn các học sinh */___/* Bài 804: Viết hàm tạo node trong danh sách liên kết đơn các thí sinh
*/___/* Bài 805: Viết hàm tạo node trong danh sách liên kết đơn các phòng trong khách
sạn(PHONG)
*/___/* Bài 806: Viết hàm tạo node trong danh sách liên kết đơn các đường tròn

String
Viết lại các hàm String
Hàm STRLEN Hàm STRCPY Hàm STRCMP Hàm STRICMP Hàm STRCAT Hàm STRLWR Hàm STRUPR Hàm SUBSTR Hàm STRSTR Hàm STRREV Hàm ATOI Hàm ATOF Hàm ITOA

Tập tin: Các ví dụ:

–	Đọc và in ra nội dung tập tin
–	Sao chép tập tin
–	Đổi chữ thường sang chữ hoa
–	In hoa các chữ trong tập tin
–	Kiểm tra tình trạng tập tin
–	Nhập mảng từ File

Dùng tập tin lưu và xử lý dữ liệu
–	Đếm số chữ cái
–	Đếm số dòng
–	Đếm số từ
–	Thống kê các từ
–	Lựa ra các số nguyên tố
–	Tìm cặp số có giá trị gần nhau nhất
–	Tìm chuỗi ký tự
–	Tìm số dương nhỏ nhất
–	Tìm số lớn nhất
–	Tính tổng các số thực
–	Xuất n số nguyên tố đầu
Danh sách sinh viên
*/
