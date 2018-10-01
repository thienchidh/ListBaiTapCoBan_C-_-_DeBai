/* Bài 384: Tìm các chữ số xuất hiện nhiều nhất trong ma trận*/
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
void TachChuSo(int n, int b[]) {
    int ChuSo;
    n = abs(n);
    do {
        ChuSo = n % 10;
        b[ChuSo]++;
        n /= 10;
    } while(n > 0);
}
void TimCacChuSoXuatHienNhieuNhat(int a[][MAX], int dong, int cot) {
    int b[10] = {0};
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            TachChuSo(a[i][j], b);
        }
    }
    int ChuSoXuatHienNhieuNhat = 0;
    for(int i = 0; i < 10; i++) {
        if(b[ChuSoXuatHienNhieuNhat] < b[i]) {
            ChuSoXuatHienNhieuNhat = i;
        }
    }
    for(int i = 0; i < 10; i++) {
        if(b[ChuSoXuatHienNhieuNhat] == b[i]) {
            cout << i << " ";
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    TimCacChuSoXuatHienNhieuNhat(a, dong, cot);

    return 0;
}
