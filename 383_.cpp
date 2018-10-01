/* Bài 383: Tìm số hoàn thiện nhỏ nhất*/
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

int TimSoHoanThienDauTien(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(KiemTraHoanThien(a[i][j]) == 1) {
                return a[i][j];
            }
        }
    }
    return -1;
}

int TimSoHoanThienNhoNhat(int a[][MAX], int dong, int cot) {
    int SoHoanThienMin = TimSoHoanThienDauTien(a, dong, cot);
    if (SoHoanThienMin == -1) {
        return -1;
    }
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (KiemTraHoanThien(a[i][j]) == 1) {
                SoHoanThienMin = (SoHoanThienMin < a[i][j]) ? SoHoanThienMin : a[i][j];
            }
        }
    }
    return SoHoanThienMin;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);


    cout << TimSoHoanThienNhoNhat(a, dong, cot) << endl;
    return 0;
}
