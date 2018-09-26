/* Bài 291: Biến đổi mảng bằng cách thay giá trị max = giá trị min và ngược lại */
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
void TimMinMax(int a[], int n, int &max, int &min) {
    max = a[0];
    min = a[0];
    for(int i = 1; i < n; i++) {
        max = (a[i] > max) ? a[i] : max;
        min = (a[i] < min) ? a[i] : min;
    }
}

void DoiMaxBangMinVaNguocLai(int a[], int n, int max, int min) {
    for(int i = 0; i < n; i++) {
        if(a[i] == max) {
            a[i] = min;
        } else if(a[i] == min) {
            a[i] = max;
        }
    }
}
int main() {
    int n, min, max;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    TimMinMax(a, n, max, min);
    DoiMaxBangMinVaNguocLai(a, n, max, min);
    xuat(a, n);

    return 0;
}
