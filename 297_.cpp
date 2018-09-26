/* Bài 297: Tính tổng từng mảng con tăng*/
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
int KiemTraTangDan(int b[], int nb) {
    for(int i = 0; i < nb - 1; i++) {
        if(b[i] > b[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int TongMangCon(int b[], int nb) {
    int Tong = 0;
    for(int i = 0; i < nb; i++) {
        Tong += b[i];
    }
    return Tong;
}
void TinhTongTungMangConTang(int a[], int n) {
    int ChieuDaiCon, Tong;
    int b[MAX], nb;
    for(int i = 0; i < n; i++) {
        for(ChieuDaiCon = 1; ChieuDaiCon <= n; ChieuDaiCon++) {
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++) {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb) == 1) {
                xuat(b, nb);
                Tong = TongMangCon(b, nb);
                cout << Tong << endl;
            }
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    TinhTongTungMangConTang(a, n);

    return 0;
}
