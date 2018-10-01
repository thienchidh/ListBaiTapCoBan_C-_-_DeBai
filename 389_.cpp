/* Bài 389: Liệt kê các dòng có nhiều số hoàn thiện nhất*/
#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void NhapMang(int a[][MAX], int &dong, int &cot) {
    cin >> dong >> cot;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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
    }
    return 0;
}

void LietKeCacDongCoNhieuSoHoanThienNhat(int a[][MAX], int dong, int cot) {
    int dem[MAX] = {0};
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(KiemTraHoanThien(a[i][j]) == 1) {
                dem[i]++;
            }
        }
    }
    int Max = dem[0];
    for(int i = 1; i < dong; i++) {
        Max = (Max > dem[i]) ? Max : dem[i];
    }
    for(int i = 0; i < dong; i++) {
        if(Max == dem[i]) {
            cout << i << " "  << Max << endl;
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongCoNhieuSoHoanThienNhat(a, dong, cot);

    return 0;
}
