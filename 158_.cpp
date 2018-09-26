/* Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x]chứa tất cả các giá trị trong mảng*/
#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;

void nhap (float a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(float a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
float timx(float a[], int n) {
    float x = a[0];
    for(int i = 1; i < n; i++) {
        x = (x > (fabs)(a[i])) ?  x  :  (fabs)(a[i]);
    }
    return x;
}
int main() {
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, n);
    xuat(a, n);
    cout << timx(a, n) << "\n";
    return 0;
}
