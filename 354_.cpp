/* Bài 354: Kiểm tra các giá trị trong ma trận có giảm dần theo dòng và cột hay không*/
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
int KiemTra1HangMaTranCoGiamDan(int a[][MAX], int x, int cot) {
    int flag = 1;
    for(int j = 0; j < cot - 1; j++) {
        for(int k = j + 1; k < cot; k++) {
            if(a[x][j] < a[x][k]) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
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

int KiemTraMaTranCoGiamDanTheoDongVaCot(int a[][MAX], int dong, int cot) {
    int flag = 1;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(KiemTra1HangMaTranCoGiamDan(a, i, cot) == 0 || KiemTra1CotMaTranCoGiamDan(a, j, dong) == 0) {
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
    int flag = KiemTraMaTranCoGiamDanTheoDongVaCot(a, dong, cot);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
