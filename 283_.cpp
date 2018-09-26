/* Bài 283: Đảo ngược mảng ban đầu*/
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

void DaoMang(int a[], int n) {
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        HoanVi(a[i], a[j]);
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DaoMang(a, n);
    xuat(a, n);

    return 0;
}
