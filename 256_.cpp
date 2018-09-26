/* Bài 256: Sắp xếp mảng giảm dần*/
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

int main() {
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    sort(a, a+n, greater<int>());
    xuat(a, n);
    return 0;
}
