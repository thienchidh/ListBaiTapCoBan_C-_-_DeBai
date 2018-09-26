/* Bài 190: Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng 1 chiều các sốnguyên*/
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
int KiemTraToanLe(int n) {
    int dv;
    while (n != 0) {
        dv = n % 10;
        if (dv % 2 == 0)
            return 0;
        n = n / 10;
    }
    return 1;
}

void LietKeSoToanChuSoLe(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraToanLe(a[i]) == 1) {
            cout << a[i] << " ";
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    LietKeSoToanChuSoLe(a, n);

    return 0;
}
