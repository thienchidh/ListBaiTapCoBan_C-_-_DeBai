/* Bài 273: Xóa tất cả các số âm trong mảng*/
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

void XoaCacSoAm(int a[], int &n) {
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    XoaCacSoAm(a, n);
    xuat(a, n);
    return 0;
}
