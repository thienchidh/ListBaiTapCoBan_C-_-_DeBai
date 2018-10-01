/* Bài 367: Tìm max trong ma trận*/
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
int TimMaxTrongMaTran(int a[][MAX], int dong, int cot) {
    int Max = a[0][0];
    for (int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            Max = (a[i][j] > Max) ? a[i][j] : Max;
        }
    }
    return Max;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    cout << TimMaxTrongMaTran(a, dong, cot) << endl;
    return 0;
}
