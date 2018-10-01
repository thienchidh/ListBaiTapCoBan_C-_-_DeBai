/* Bài 393: Hoán vị 2 cột trên ma trận*/
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

void HoanVi2Cot(int a[][MAX], int dong, int cot, int cot1, int cot2) {
    if((cot1 >= 0 && cot1 < cot) && (cot2 >= 0 && cot2 < cot)) {
        for(int i = 0; i < dong; i++) {
            HoanVi(a[i][cot1], a[i][cot2]);
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    cin >> cot1 >> cot2;
    XuatMang(a, dong, cot);


    HoanVi2Cot(a, dong, cot, cot1, cot2);

    XuatMang(a, dong, cot);

    return 0;
}
