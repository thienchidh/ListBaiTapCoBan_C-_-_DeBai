/* Bài 182: Cho mảng 1 chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị trong mảng có ít nhất 1 lận cận trái dấu với nó*/
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

void LietKe(float a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0)) {
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
    LietKe(a, n);

    return 0;
}
