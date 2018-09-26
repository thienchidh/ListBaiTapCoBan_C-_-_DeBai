/* Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên */
#include<bits/stdc++.h>
using namespace std;

#define MAX 100

void nhap (int a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
//int KiemTraSoChinhPhuong(int a)
//{
//   for (int i = 1; i < a; i++)
//       if (i * i == a)
//           return 1;
//   return 0;
//}

int KiemTraChinhPhuong(int n) {
    /*Số chính phương là số mà kết quả khai căn bậc 2 là 1 số nguyên
    sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
    sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương*/
    if (sqrt((float)n) == (int)sqrt((float)n)) { // So sánh 2 số khi chưa ép về kiểu nguyên và số đã ép về kiểu nguyên
        return 1;
    } else {
        return 0;
    }
}

int TimChinhPhuongDauTien(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraChinhPhuong(a[i]) == 1) {
            return a[i];
        }
    }
    return -1;
}
int main() {
    int n;
    int a[MAX];
    int x, y;

    nhap(a, n);
    xuat(a, n);

    cout << TimChinhPhuongDauTien(a, n);
    return 0;
}
