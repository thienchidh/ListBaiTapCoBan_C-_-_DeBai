/* Bài 295: Liệt kê dãy con tăng dần*/
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
bool KiemTraTangDan(int b[], int nb) {
    for(int i = 0; i < nb - 1; i++) {
        if(b[i] > b[i + 1]) {
            return false;
        }
    }
    return true;
}

void LietKeDayConTangDan(int a[], int n) {
    int ChieuDai;
    int b[MAX], nb;
    for(int i = 0; i < n; i++) {
        for(ChieuDai = 1; ChieuDai <= n; ChieuDai++) {
            nb = 0;
            for(int j = i; j < ChieuDai; j++) {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb)) {
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
    LietKeDayConTangDan(a, n);

    return 0;
}
