/* Bài 177: Hãy liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x, y] cho trước*/
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

void LietKeTrongDoanXY(float a[], int n, float x, float y) {
    for(int i = 0; i < n; i++) {
        if(x <= a[i] && a[i] <= y) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    float a[MAX];
    float x, y;
    cin >> x >> y;
    nhap(a, n);
    xuat(a, n);

    LietKeTrongDoanXY(a, n, x, y);

    return 0;
}

