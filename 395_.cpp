/* Bài 395: Dịch lên xoay vòng các hàng trong ma trận */
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
void DichLenXoayVongCacHangTrongMaTran(int a[][MAX], int dong, int cot) {
    // Gán mảng phụ vào hàng đầu
    int temp[MAX];
    for(int i = 0; i < cot; i++) {
        temp[i] = a[0][i];
    }

    // Gán từ trên xuống
    for(int i = 0; i < dong - 1; i++) {
        for(int j = 0; j < cot; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    // Dùng mảng phụ lưu lại hàng cuối
    for(int i = 0; i < cot; i++) {
        a[dong - 1][i] = temp[i];
    }
}

int main() {
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichLenXoayVongCacHangTrongMaTran(a, dong, cot);
    XuatMang(a, dong, cot);

    return 0;
}
