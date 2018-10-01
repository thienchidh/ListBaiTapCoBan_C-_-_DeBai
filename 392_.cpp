/* Bài 392: Hoán vị 2 dòng trên ma trận*/
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

void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][MAX], int dong, int cot, int dong1, int dong2) {
    if((dong1 >= 0 && dong1 < dong) && (dong2 >= 0 && dong2 < dong)) {
        for(int j = 0; j < cot; j++) {
            HoanVi(a[dong1][j], a[dong2][j]);
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    int dong1, dong2;
    NhapMang(a, dong, cot);

    cin >> dong1 >> dong2;

    XuatMang(a, dong, cot);

    HoanVi2Dong(a, dong, cot, dong1, dong2);

    XuatMang(a, dong, cot);

    return 0;
}
