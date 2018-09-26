/* Bài 251: Hãy cho biết các phần tử trong mảng có bằng nhau không*/
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

int KiemTraBangNhau(int a[], int n) {
    int flag = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}
int main() {
    int n, d;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int flag = KiemTraBangNhau(a, n);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
