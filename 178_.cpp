/* Bài 178: Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn[x, y] cho trước (x, y là các số nguyên)*/
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

void LietKeChanTrongDoanXY(int a[], int n, int x, int y) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0 && x <= a[i] && a[i] <= y) {
            cout << a[i] << " ";
        }
    }
}
int main() {
    int n;
    int a[MAX];
    int x, y;
    cin >> x >> y;
    nhap(a, n);
    xuat(a, n);

    LietKeChanTrongDoanXY(a, n, x, y);

    return 0;
}


