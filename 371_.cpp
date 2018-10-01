/* Bài 371: Liệt kê các dòng có chứa max*/
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

int TimGiaTriMax(int a[][MAX], int cot, int dong) {
    int Max = a[0][0];
    for (int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            Max = (Max > a[i][j]) ? Max : a[i][j];
        }
    }
    return Max;
}

void LietKeCacDongCoChuaMax(int a[][MAX], int dong, int cot) {
    int Max = TimGiaTriMax(a, dong, cot);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == Max) {
                for (j = 0; j < cot; j++) {
                    cout << a[i][j] << " ";
                }
            }
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongCoChuaMax(a, dong, cot);
    return 0;
}
