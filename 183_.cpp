/* Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị tại đó là giá trị lớn nhấttrong mảng 1 chiều các số thực*/
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
float TimMax(float a[], int n) {
    float max = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void LietKeViTriLonNhat(float a[], int n) {
    float max = TimMax(a, n);
    for(int i = 0; i < n; i++) {
        if(a[i] == max) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeViTriLonNhat(a, n);
    return 0;
}
