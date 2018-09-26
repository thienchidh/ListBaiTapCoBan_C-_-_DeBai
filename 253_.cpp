/* Bài 253: Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b không*/
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
int KiemTraMangANamTrongMangB(int a[], int b[], int n, int m) {
    int flag = 0;
    int dem = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                dem++;
            }
        }
    }
    if(dem == n) {
        flag = 1;
    }
    return flag;
}
int main() {
    int n, m;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int b[MAX];
    nhap(b, m);
    xuat(b, m);

    int flag = KiemTraMangANamTrongMangB(a, b, n, m);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
