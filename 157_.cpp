/* Bài 157: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn nàychứa tất cả các giá trị trong mảng*/
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

void timdoan(float a[], int n) {
    float Max = a[0];
    float Min = a[0];
    for(int i = 0; i < n; i++) {
        Max = max(a[i], Max);
        Min = min(a[i], Min);
    }
    cout << Min << " " << Max << endl;
}
int main() {
    int n;
    float a[MAX], b[MAX];

    nhap(a, n);
    xuat(a, n);
    timdoan(a, n);

    return 0;
}
