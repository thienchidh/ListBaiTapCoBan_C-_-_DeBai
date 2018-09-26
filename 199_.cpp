/* Bài 199: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1chiều các số nguyênKỹ thuật tính tổng:*/
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
bool KiemTraNguyenTo(int n) {
    if (n < 2) {
        return false;
    } else if (n > 2) {
        if (n % 2 == 0) {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

void LietKeViTriNguyenTo(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraNguyenTo(a[i]) == true) {
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
    LietKeViTriNguyenTo(a, n);
    return 0;
}
