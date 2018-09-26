/* Bài 272: Hãy xóa tất cả số lớn nhất trong mảng các số thực*/
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
void Xoa1PhanTu(float a[], int &n, int ViTriXoa) {
    for(int i = ViTriXoa; i < n; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

float TimMax(float a[], int n) {
    float max = a[0];
    for(int i = 1; i < n; i++) {
        max = (max < a[i]) ? a[i] : max;
    }
    return max;
}

void XoaCacSoLonNhat(float a[], int &n) {
    float max =TimMax(a, n);
    for(int i = 0; i < n; i++) {
        if(a[i] == max) {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}

int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    XoaCacSoLonNhat(a, n);
    xuat(a, n);

    return 0;
}
