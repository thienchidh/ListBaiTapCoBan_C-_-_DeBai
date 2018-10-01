/* Bài 394: Dịch xuống xoay vòng các hàng trong ma trận */
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
void DichXuongXoayVongCacHangTrongMaTran(int a[][MAX], int dong, int cot) {
    // Dùng mảng phụ lưu lại hàng cuối
    int temp[MAX];
    for(int i = 0; i < dong; i++) {
        temp[i] = a[cot - 1][i];
    }
    // Gán từ cuối lên
    for(int i = cot - 1; i >= 1; i--) {
        for(int j = 0; j < dong; j++) {
            a[i][j] = a[i - 1][j];
        }
    }
    // Gán mảng phụ vào hàng đầu
    for(int i = 0; i < dong; i++) {
        a[0][i] = temp[i];
    }
}

int main() {
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichXuongXoayVongCacHangTrongMaTran(a, dong, cot);
    XuatMang(a, dong, cot);

    return 0;
}
