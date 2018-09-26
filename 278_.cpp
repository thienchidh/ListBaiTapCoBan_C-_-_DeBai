/* Bài 278: Xóa tất cả các phần tử trùng nhau trong mảng và chỉ giữ lại duy nhất 1phần tử*/
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

void XoaCacPhanTuTrungNhau(int a[], int &n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                Xoa1PhanTu(a, n, j);
                j--;
            }
        }
    }
}
int main() {
    int n;
    int a[MAX];

    int ViTriXoa;
    nhap(a, n);
    xuat(a, n);

    XoaCacPhanTuTrungNhau(a, n);
    xuat(a, n);
    return 0;
}
