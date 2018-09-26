/* Bài 299: Liệt kê dãy con toàn dương và có độ dài lớn hơn 1 */
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
int KiemTraMangDuong(int b[], int nb) {
    for(int i = 0; i < nb; i++) {
        if(b[i] < 0) {
            return 0;
        }
    }
    return 1;
}


void LietKeDayConToanDuongVaDoDaiLonHon1(int a[], int n) {
    int ChieuDaiCon;
    int b[MAX], nb;
    for(int i = 0; i < n; i++) {
        for(ChieuDaiCon = 2 + i; ChieuDaiCon <= n; ChieuDaiCon++) { // phải có hơn 2 phần tử
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++) {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraMangDuong(b, nb) == 1) {
                xuat(b, nb);
            }
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    LietKeDayConToanDuongVaDoDaiLonHon1(a, n);

    return 0;
}
