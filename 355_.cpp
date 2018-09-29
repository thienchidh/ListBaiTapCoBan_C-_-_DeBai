/* Bài 355: Liệt kê các dòng toàn âm trong ma trận các số thực*/
#include<bits/stdc++.h>
#define MAX 100

using namespace std;


void NhapMang(float a[][MAX], int &dong, int &cot) {
    cin >> dong >> cot;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void LietKeCacDongToanAm(float a[][MAX], int dong, int cot) {
    int flag;
    for(int i = 0; i < dong; i++) {
        flag = 1;
        for(int j = 0; j < cot; j++) {
            if(a[i][j] > 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            for(int j = 0; j < cot; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
int main() {
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongToanAm(a, dong, cot);
    return 0;
}
