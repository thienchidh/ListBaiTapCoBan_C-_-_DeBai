/* Bài 363: Liệt kê các cột tăng dần trong ma trận*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 100


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
void LietKeCacCotTangDan(int a[][100], int dong, int cot) {
    int i, j, flag;
    for (j = 0; j < cot; j++) {
        for (flag = 1, i = 0; i < dong - 1; i++) {
            if (a[i][j] > a[i + 1][j]) {
                flag = 0;
                break;
            }

        }
        if (flag == 1) {
            cout << j << endl;
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacCotTangDan(a, dong, cot);

    return 0;
}
