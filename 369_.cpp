/* Bài 369: Tìm số dương đầu tiên trong ma trận */
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
int TimGiaTriDuongDauTien(int a[][100], int dong, int cot) {
    for (int i = 0; i <  dong; i++) {
        for(int j = 0; j < cot; j++) {
            if (a[i][j] > 0) {
                return a[i][j];
            }
        }
    }
    return -1;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    cout << TimGiaTriDuongDauTien(a, dong, cot) << endl;
    return 0;
}
