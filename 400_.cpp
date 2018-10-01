/* Bài 400: Xóa 1 dòng trong ma trận */
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

void XoaDong_Cach2(int a[][MAX], int &dong, int cot, int vitrixoa) {
    for(int i = vitrixoa; i < dong - 1; i++) {
        for(int j = 0; j < cot; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    dong--;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int vitridongcanxoa;
    cin >> vitridongcanxoa;
    XoaDong_Cach2(a, dong, cot, vitridongcanxoa);
    XuatMang(a,dong,cot);

    return 0;
}
