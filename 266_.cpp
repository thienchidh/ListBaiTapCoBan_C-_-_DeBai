/* Bài 266: Thêm 1 phần tử x vào mảng tại vị trí k*/
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

void Them1PhanTu(int a[], int &n, int ViTriThem, int PhanTuThem) {
    for(int i = n; i > ViTriThem; i--) {
        a[i] = a[i - 1];
    }
    a[ViTriThem] = PhanTuThem;
    n++;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int ViTriThem, PhanTuThem;

    // 0 <= ViTriThem <= n

    cin >> ViTriThem >> PhanTuThem;

    Them1PhanTu(a, n, ViTriThem, PhanTuThem);

    xuat(a, n);

    return 0;
}
