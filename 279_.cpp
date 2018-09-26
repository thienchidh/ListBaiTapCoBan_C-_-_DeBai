/* Bài 279: Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảngKỹ thuật xử lý mảng*/
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

void XoaCacPhanTuXuatHienNhieuHon1Lan(int a[], int &n) {
    for(int i = 0; i < n - 1; i++) {
        int flag = 0;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                Xoa1PhanTu(a, n, j);
                j--;
                flag = 1;
            }
        }
        if(flag == 1) {
            Xoa1PhanTu(a, n, i); // Xóa luôn chính nó
        }
    }
}
int main() {
    int n;
    int a[MAX];

    int ViTriXoa;
    nhap(a, n);
    xuat(a, n);

    XoaCacPhanTuXuatHienNhieuHon1Lan(a, n);
    xuat(a, n);
    return 0;
}
