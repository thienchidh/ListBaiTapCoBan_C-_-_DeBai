/* Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực*/
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

float timduongdautien(float a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return a[i];
        }
    }
    return -1;
}
float timgiatriduongnhonhat(float a[], int n) {
    float duongnhonhat = timduongdautien(a, n);
    for(int i = 0; i < n; i++) {
        if(a[i] > 0 && a[i] < duongnhonhat) {
            duongnhonhat = a[i];
        }
    }
    return duongnhonhat;
}

void LietKeViTriBgGiaTriDuongMin(float a[], int n) {
    float DuongMin = timgiatriduongnhonhat(a, n);
    for(int i = 0; i < n; i++) {
        if(a[i] == DuongMin) {
            cout << i << " ";s
        }
    }
}
int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);

    int vitriduongdau = timduongdautien(a, n);
    if(vitriduongdau == -1) {
        cout << -1 << endl;
    } else {
        LietKeViTriBgGiaTriDuongMin(a, n);
    }
    return 0;
}
