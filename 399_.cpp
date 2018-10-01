/* Bài 399: Dịch trái xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên ma trận*/
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
void DichTraiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(int a[][MAX], int dong, int cot) {
    int i, j;
    int temp = a[0][0]; // lấy đi 1 ô tạo chỗ trống để dịch chuyển

    for(i = 0, j = 0; j < cot - 1; j++) {
        a[i][j] = a[i][j + 1];
    }
    for(i, j; i < dong - 1; i++) {
        a[i][j] = a[i + 1][j];
    }
    for(i, j; j > 0; j--) {
        a[i][j] = a[i][j - 1];
    }
    for(i, j; i > 1; i--) {
        a[i][j] = a[i - 1][j];
    }
    a[1][0] = temp;
}
int main() {
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichTraiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(a, dong, cot);
    XuatMang(a, dong, cot);
    return 0;
}
