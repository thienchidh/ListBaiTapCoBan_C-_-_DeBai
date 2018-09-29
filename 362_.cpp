/* Bài 362: Liệt kê các dòng giảm dần trong ma trận*/
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
void LietKeCacDongGiamDan(int a[][100],int dong,int cot) {
    int i, j, flag;
    for (i = 0; i < dong; i++) {
        for (flag = 1,j = 0; j < cot - 1; j++) {
            if (a[i][j] < a[i][j + 1]) {
                flag = 0;
                break;
            }

        }
        if (flag == 1) {
            cout << i << endl;
        }
    }
}

int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongGiamDan(a, dong, cot);

    return 0;
}
