/* Bài 353: Kiểm tra một cột ma trận có giảm dần hay không*/
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
int KiemTra1CotMaTranCoGiamDan(int a[][MAX], int dong, int y) {
    int flag = 1;
    for(int i = 0; i < dong - 1; i++) {
        for(int j = i + 1; j < dong; j++) {
            if(a[i][y] < a[j][y]) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    int y;
    cin >> y;
    int flag = KiemTra1CotMaTranCoGiamDan(a, dong, y);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
