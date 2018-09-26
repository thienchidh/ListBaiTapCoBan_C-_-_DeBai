/* Bài 169 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số chẵn nhỏ nhất lớn hơn mọi giá trị có trong mảng*/
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
// Nếu không có lẻ thì trả về -1
int TimViTriLeDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            return i;
        }
    }
    return -1;
}
int TimSoLeNhoNhat(int a[], int n, int ViTriDauTien) {
    int MinLe = a[ViTriDauTien];

    for (int i = ViTriDauTien + 1; i < n; i++) {
        if (a[i] % 2 != 0 && a[i] < MinLe) {
            MinLe = a[i];
        }
    }
    return MinLe;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int ViTriLeDauTien = TimViTriLeDauTien(a, n);
    if (ViTriLeDauTien == -1) {
        cout << -1 << endl;
    } else {
        int MinLe = TimSoLeNhoNhat(a, n, ViTriLeDauTien);
        int SoChanThoa = MinLe - 1;
        cout <<  SoChanThoa << endl;
    }
    return 0;
}
