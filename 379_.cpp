/* Bài 379: Đếm số lượng min*/
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
int DemSoLuongGiaTriMin(int a[][MAX], int dong, int cot) {
    int dem = 0;
    int min = a[0][0];
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (min == a[i][j]) {
                dem++ ;
            } else if (a[i][j] < min) {
                min = a[i][j];
                dem = 1;
            }
        }
    }
    return dem;
}

int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    cout << DemSoLuongGiaTriMin(a, dong, cot) << endl;
    return 0;
}
