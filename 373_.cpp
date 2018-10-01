/* Bài 373: Tìm giá trị nhỏ nhất trên 1 cột */
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

void TimGiaTriNhoNhatTren1Cot(int a[][100], int dong, int cot) {
    for (int i = 0; i < cot; i++) {
        int Min = a[0][i];
        for (int j = 0; j < dong; j++) {
            Min = (Min < a[j][i]) ? Min : a[j][i];
        }
        cout << i << " " << Min << endl;

    }
}

int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    TimGiaTriNhoNhatTren1Cot(a, dong, cot);
    return 0;
}
