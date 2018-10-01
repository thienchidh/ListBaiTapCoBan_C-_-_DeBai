/* Bài 378: Tìm 1 chữ số xuất hiện nhiều nhất*/
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
void TachTungChuSo(int n, int b[]) {
    int ChuSo;
    n = abs(n);
    do {
        ChuSo = n % 10;
        b[ChuSo]++;
        n /= 10;
    } while(n > 0);
}

int TimChuSoXuatHienNhieuNhat(int a[][MAX], int dong, int cot) {
    int b[10] = {0}; // Khởi tạo mảng 10 phần tử toàn 0
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            TachTungChuSo(a[i][j], b);
        }
    }
    int ChuSoXuatHienNhieuNhat = 0;
    for(int i = 0; i < 10; i++) {
        if(b[ChuSoXuatHienNhieuNhat] < b[i]) {
            ChuSoXuatHienNhieuNhat = i;
        }
    }
    return ChuSoXuatHienNhieuNhat;
}

int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    cout <<  TimChuSoXuatHienNhieuNhat(a, dong, cot) << endl;
    return 0;
}
