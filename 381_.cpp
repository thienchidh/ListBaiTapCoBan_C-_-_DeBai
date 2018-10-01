/* Bài 381: Tìm giá trị xuất hiện nhiều nhất */
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
int DemSoLanXuatHienCuaX(int a[][MAX], int dong, int cot, int x) {
    int temp = 0;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(a[i][j] == x) {
                temp++;
            }
        }
    }
    return temp;
}
int TimGiaTriXuatHienNhieuNhat(int a[][MAX], int dong, int cot) {
    int temp1, temp = DemSoLanXuatHienCuaX(a, dong, cot, a[0][0]), index1 = 0, index2 = 0;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            temp1 = DemSoLanXuatHienCuaX(a, dong, cot, a[i][j]);
            if(temp < temp1) {
                temp = temp1;
                index1 = i;
                index2 = j;
            }
        }
    }
    return a[index1][index2];
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    cout << TimGiaTriXuatHienNhieuNhat(a, dong, cot) << endl;
    return 0;
}
