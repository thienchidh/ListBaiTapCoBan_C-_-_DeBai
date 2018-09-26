/* Bài 258: Sắp xếp số nguyên tố tăng dần nhưng giá trị khác giữ nguyên vị trí */
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
int KiemTraNguyenTo(int n) {
    if(n < 2) {
        return 0;
    } else if(n > 2) {
        if(n % 2 == 0) {
            return 0;
        }
        for(int i = 3; i <= sqrt((float)n); i+= 2) {
            if(n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}
void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SapXepNguyenToTangDan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(KiemTraNguyenTo(a[i]) == 1) {
            for(int j = i + 1; j < n; j++) {
                if(KiemTraNguyenTo(a[j]) == 1 && a[i] > a[j]) {
                    HoanVi(a[i], a[j]);
                }
            }

        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    SapXepNguyenToTangDan(a, n);
    xuat(a, n);

    return 0;
}
