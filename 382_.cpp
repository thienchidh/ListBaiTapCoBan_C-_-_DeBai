/* Bài 382: Tìm số chính phương lớn nhất */
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
int KiemTraChinhPhuong(int n) {
    return sqrt((float)n) == (int)sqrt((float)n);
}

int TimSoChinhPhuongDauTien(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(KiemTraChinhPhuong(a[i][j]) == 1) {
                return a[i][j];
            }
        }
    }
    return -1;
}

int TimSoChinhPhuongLonNhat(int a[][MAX], int dong, int cot) {
    int SoChinhPhuongMax = TimSoChinhPhuongDauTien(a, dong, cot);
    if (SoChinhPhuongMax == -1) {
        return -1;
    }
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (KiemTraChinhPhuong(a[i][j]) == 1) {
                SoChinhPhuongMax = (SoChinhPhuongMax > a[i][j]) ? SoChinhPhuongMax : a[i][j];
            }
        }
    }
    return SoChinhPhuongMax;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);


    cout << TimSoChinhPhuongLonNhat(a, dong, cot) << endl;
    return 0;
}
