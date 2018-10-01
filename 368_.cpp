/* Bài 368: Tìm giá trị lớn thứ 2 trong ma trận */
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
int TimMaxThu2TrongMaTran(int a[][MAX], int dong, int cot) {
    int Max = a[0][0];
    for (int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            Max = (a[i][j] > Max) ? a[i][j] : Max;
        }
    }
    int Max2 = a[0][0];
    for (int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if (Max2 < Max && a[i][j]!= Max && Max2 < a[i][j]) {
                Max2 = a[i][j];
            }
        }
    }
    return Max2;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    cout << TimMaxThu2TrongMaTran(a, dong, cot) << endl;
    return 0;
}
