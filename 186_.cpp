/* Bài 186: Hãy liệt kê các vị trí trong mảng 1 chiều các số thực mà giá trị tại đó bằng giá trị âm đầu tiên trong mảng*/
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

float TimAmDau(float a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            return a[i];
        }
    }
    return -1;
}

void LietKeViTriBangGiaTriAmDau(float a[], int n) {
    float AmDau = TimAmDau(a, n);
    for(int i = 0; i < n; i++) {
        if(a[i] == AmDau) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeViTriBangGiaTriAmDau(a, n);
    return 0;
}
