/* Bài 259: Sắp xếp số hoàn thiện giảm dần nhưng giá trị khác giữ nguyên vị trí */
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

int KiemTraHoanThien(int n) {
    int tong = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            tong += i;
        }
    }
    if(tong == n) {
        return 1;
    } else {
        return 0;
    }
}
void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SapXepHoanThienGiamDan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(KiemTraHoanThien(a[i]) == 1) {
            for(int j = i + 1; j < n; j++) {
                if(KiemTraHoanThien(a[j]) == 1 && a[i] < a[j]) {
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

    SapXepHoanThienGiamDan(a, n);
    xuat(a, n);

    return 0;
}

