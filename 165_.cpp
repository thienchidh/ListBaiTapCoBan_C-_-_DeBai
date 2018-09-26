/* Bài 165: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên có chữ số đầu tiên là chữ số lẻ*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100

void nhap (int a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int ChuSoDau( int n) {
    int dv;
    while (n >= 10) { // vòng lặp kết thúc khi n < 10
        dv = n % 10;
        n = n / 10;
    }
    if (n % 2 == 0)
        return 0;
    return 1;
}
int TimChuSoDauLe(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if (ChuSoDau(a[i]) == 1) {
            return a[i];
        }
    }
    return 0;
}

int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    cout << TimChuSoDauLe(a, n) << endl;
    return 0;
}
