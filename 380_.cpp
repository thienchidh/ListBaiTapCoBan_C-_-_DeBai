/* Bài 380: Đếm số lượng chẵn nhỏ nhất */
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

int TimChanDauTien(int a[][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] % 2 == 0) {
                return a[i][j];
            }
        }
    }
    return -1;
}
int TimChanMin(int a[][MAX], int dong, int cot) {
    int ChanMin = TimChanDauTien(a, dong, cot);
    if (ChanMin == -1) {
        return -1;
    }
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] % 2 == 0) {
                ChanMin = (ChanMin < a[i][j]) ? ChanMin : a[i][j];
            }
        }
    }
    return ChanMin;
}
int DemSoLuongGiaTriChanMin(int a[][MAX], int dong, int cot) {
    int dem = 0;
    int min = TimChanMin(a, dong, cot);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (min == a[i][j]) {
                dem++ ;
            }
        }
    }
    return dem;
}

int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    cout << DemSoLuongGiaTriChanMin(a, dong, cot) << endl;
    return 0;
}
