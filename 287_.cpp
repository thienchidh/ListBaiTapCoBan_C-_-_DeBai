/* Bài 287: Dịch phải xoay vòng k phần tử trong mảng*/
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

void DichPhai(int a[], int n, int k) {
    while(k--) {
        int tam = a[n - 1];
        for(int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = tam;
    }
}
int main() {
    int n, k;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    cin >> k;
    DichPhai(a, n, k);
    xuat(a, n);

    return 0;
}
