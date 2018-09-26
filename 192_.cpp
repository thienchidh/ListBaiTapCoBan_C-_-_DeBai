/* Bài 192: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầutiên là số chẵn*/
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
int TimChuSoDauChan(int n) {
    int dv;
    while (n >= 10) { // vòng lặp kết thúc khi n < 10
        dv = n % 10;
        n = n / 10;
    }
    if (n % 2 != 0)
        return 0;
    return 1;
}

void LietKeChuSoDauChan(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if (TimChuSoDauChan(a[i]) == 1) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    LietKeChuSoDauChan(a, n);

    return 0;
}
