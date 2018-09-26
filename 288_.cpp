/* Bài 288: Hãy xuất phần tử trong mảng theo yêu cầu: chẵn vàng, lẻ trắng*/
#include<bits/stdc++.h>
#include<Windows.h>
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
void textcolor(int x) {
    HANDLE mau;
    mau = GetStdHandle
          (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}
void XuatChanVangLeTrang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            textcolor(14);
            cout << a[i] << " ";
        } else {
            textcolor(7);
            cout << a[i] << " ";
        }
    }
    cout << endl;
}


int main() {
    int n, k;
    int a[MAX];

    nhap(a, n);
    XuatChanVangLeTrang(a, n);

    return 0;
}
