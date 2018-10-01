/* Bài 397: Dịch phải xoay vòng các cột trong ma trận*/
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
void DichPhaiXoayVongCacCotTrongMaTran(int a[][MAX], int dong, int cot) {
    int temp[MAX];
    for(int i = 0; i < dong; i++) {
        temp[i] = a[i][cot - 1];
    }
    for(int j = cot - 1; j > 0; j--) {
        for(int i = 0; i < dong; i++) {
            a[i][j] = a[i][j - 1];
        }
    }
    for(int i = 0; i < dong; i++) {
        a[i][0] = temp[i];
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichPhaiXoayVongCacCotTrongMaTran(a, dong, cot);
    XuatMang(a, dong, cot);

    return 0;
}
