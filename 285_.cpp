/* Bài 285: Đảo ngược thứ tự số dương trong mảng */
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
void HoanVi(int &a, int &b) {
    int tam = a;
    a = b;
    b = tam;
}

void DaoNguocThuTuCacSoDuong(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] > 0 && a[i] % 2 > 0) {
                HoanVi(a[i], a[j]);
            }
        }
    }

}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DaoNguocThuTuCacSoDuong(a, n);
    xuat(a, n);

    return 0;
}
