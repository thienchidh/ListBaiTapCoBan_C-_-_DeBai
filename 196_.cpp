/* Bài 196: Liệt kê các số âm trong mảng 1 chiều các số nguyên*/
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
void LietKeCacSoAm(float a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeCacSoAm(a, n);

    return 0;
}
