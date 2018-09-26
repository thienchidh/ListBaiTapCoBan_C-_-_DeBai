/* Bài 286: Dịch trái xoay vòng k phần tử trong mảng */
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

void DichTrai(int a[], int n, int k) {
    while(k--) {
        int tam = a[0];
        for(int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = tam;
    }
}
int main() {
    int n, k;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    cin >> k;

    DichTrai(a, n, k);
    xuat(a, n);

    return 0;
}
