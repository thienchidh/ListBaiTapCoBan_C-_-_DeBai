/* Bài 189: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẻ*/
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
int TimChuSoDauLe( int n) {
    int dv;
    while (n >= 10) { // vòng lặp kết thúc khi n < 10
        dv = n % 10;
        n = n / 10;
    }
    if (n % 2 == 0)
        return 0;
    return 1;
}

void LietKeViTriChuSoDauLe(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if (TimChuSoDauLe(a[i]) == 1) {
            cout << a[i] << " ";
        }
    }
}

int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    LietKeViTriChuSoDauLe(a, n);

    return 0;
}
