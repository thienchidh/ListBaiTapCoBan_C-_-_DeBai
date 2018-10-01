/* Bài 375: Tìm số chẵn lớn nhất*/
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

int TimSoChanDauTien(int a[][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] % 2 == 0) {
                return a[i][j];
            }
        }
    }
    return -1;
}

int TimSoChanLonNhat(int a[][MAX], int dong, int cot) {
    int ChanMax = TimSoChanDauTien(a, dong, cot);
    if (ChanMax == -1) {
        return -1;
    }
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(a[i][j] % 2 == 0) {
                ChanMax = (ChanMax > a[i][j]) ? ChanMax : a[i][j];
            }
        }
    }
    return ChanMax;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    cout << TimSoChanLonNhat(a, dong, cot) << endl;
    return 0;
}
