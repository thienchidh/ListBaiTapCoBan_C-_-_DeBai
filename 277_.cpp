/* Bài 277: Xóa tất cả các số nguyên tố trong mảng*/
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
void Xoa1PhanTu(int a[], int &n, int ViTriXoa) {
    for(int i = ViTriXoa; i < n; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

int KiemTraNguyenTo(int n) {
    if (n < 2) {
        return 0;
    } else if (n > 2) {
        if (n % 2 == 0) {
            return 0;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2) {
            if (n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

void XoaCacSoNguyenTo(int a[], int &n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraNguyenTo(a[i]) == 1) {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    XoaCacSoNguyenTo(a, n);
    xuat(a, n);
    return 0;
}
