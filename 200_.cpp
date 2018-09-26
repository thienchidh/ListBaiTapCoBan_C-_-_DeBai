/* Bài 200: Tính tổng các phần tử trong mảng*/
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

int TinhTong(int a[], int n) {
    int tong = 0;
    for(int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int tong = TinhTong(a, n);
    cout << tong << endl;
    return 0;
}
