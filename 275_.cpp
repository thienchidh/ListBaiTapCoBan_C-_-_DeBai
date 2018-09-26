/* Bài 275: Xóa tất cả các số chính phương trong mảng*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 100
template <typename T> void nhap (T a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
template <typename T>void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Xoa1PhanTu(int a[], int &n, int ViTriXoa) {
    for(int i = ViTriXoa; i < n; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

int KiemTraChinhPhuong(int n) {
    return sqrt(float(n)) == (int)sqrt(float(n));
}

void XoaCacSoChinhPhuong(int a[], int &n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraChinhPhuong(a[i]) == 1) {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
int main() {
    int n;
    int a[MAX];

    int ViTriXoa;
    nhap(a, n);
    xuat(a, n);

    XoaCacSoChinhPhuong(a, n);
    xuat(a, n);
    return 0;
}
