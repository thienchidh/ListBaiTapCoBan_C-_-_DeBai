/* Bài 300: Đếm mảng con giảm*/
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
int KiemTraGiamDan(int b[], int nb) {
    for(int i = 0; i < nb - 1; i++) {
        if(b[i] < b[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void DemMangConGiam(int a[], int n) {
    int ChieuDaiCon, dem = 0;
    int b[MAX], nb;
    for(int i = 0; i < n; i++) {
        for(ChieuDaiCon = 1 + i; ChieuDaiCon <= n; ChieuDaiCon++) {
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++) {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraGiamDan(b, nb) == 1) {
                xuat(b, nb);
                dem++;
            }
        }
    }
    cout << dem << endl;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    DemMangConGiam(a, n);

    return 0;
}
