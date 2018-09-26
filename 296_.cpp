/* Bài 296: Liệt kê dãy con tăng và chứa giá trị lớn nhất*/
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
int TimMax(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        max = a[i] > max ? a[i] : max;
    }
    return max;
}
int KiemTraTangDan(int b[], int nb) {
    for(int i = 0; i < nb - 1; i++) {
        if(b[i] > b[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int KiemTraCoMax(int b[], int nb, int max) {
    for(int i = 0; i < nb; i++) {
        if(b[i] == max) {
            return 1;
        }
    }
    return 0;
}
void LietKeDayConTangDanVaChuaGiaTriMax(int a[], int n, int max) {
    int ChieuDai;
    int b[MAX], nb;
    for(int i = 0; i < n; i++) {
        for(ChieuDai = 1; ChieuDai <= n; ChieuDai++) {
            nb = 0;
            for(int j = i; j < ChieuDai; j++) {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb) == 1) {
                if(KiemTraCoMax(b, nb, max) == 1) {
                    xuat(b, nb);
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

    int max = TimMax(a, n);
    LietKeDayConTangDanVaChuaGiaTriMax(a, n, max);

    return 0;
}
