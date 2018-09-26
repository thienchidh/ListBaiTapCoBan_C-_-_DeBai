/* Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1chiều các số nguyên*/
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
int KiemTraChinhPhuong(int n) {
    return (sqrt((float)n) == (int)sqrt((float)n));
}
void LietKeViTriChinhPhuong(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraChinhPhuong(a[i]) == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeViTriChinhPhuong(a, n);

    return 0;
}

