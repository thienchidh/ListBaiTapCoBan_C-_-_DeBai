/* Bài 366: Tìm số chẵn đầu tiên trong ma trận*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100


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

int TimSoChanDauTien(int a[][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if (a[i][j] % 2 == 0) {
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

    cout << TimSoChanDauTien(a, dong, cot) << endl;
    return 0;
}
