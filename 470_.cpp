/* Bài 470: Hiệu 2 ma trận*/
#include<bits/stdc++.h>
#define MAX 100

using namespace std;

void NhapMaTran(int a[][MAX], int &dong, int &cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMaTran(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void NhapMaTran(int a[][MAX], int &n) {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMaTran(int a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void TinhHieu2MaTran(int a[][MAX], int b[][MAX], int c[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}
int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], dong, cot;

    cin >> dong >> cot;

    NhapMaTran(a, dong, cot);

    NhapMaTran(b, dong, cot);

    XuatMaTran(a, dong, cot);

    XuatMaTran(b, dong, cot);

    TinhHieu2MaTran(a, b, c, dong, cot);
    XuatMaTran(c, dong, cot);
    return 0;
}






