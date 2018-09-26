/* Bài 164: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh*/
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
int TimSoGanhDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (SoGanh(a[i]) == 1) {
            return a[i];
        }
    }
    return -1;
}

int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    cout << TimSoGanhDauTien(a, n) << endl;
    return 0;
}
