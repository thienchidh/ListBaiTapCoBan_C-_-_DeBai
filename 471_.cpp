/* Bài 471: Tích 2 ma trận*/
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
void TinhTich2MaTran(int a[][MAX], int b[][MAX], int t[][MAX], int donga, int cota, int cotb) {
    for(int i = 0; i < donga; i++) {
        for(int j = 0; j < cotb; j++) {
            t[i][j] = 0;
            for(int k = 0; k < cota; k++) {
                t[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main() {
    int a[MAX][MAX], b[MAX][MAX], t[MAX][MAX];
    int da, ca, cb;

    scanf("%d", &da);
    scanf("%d", &ca);

    NhapMaTran(a, da, ca);
    XuatMaTran(a, da, ca);
    scanf("%d", &cb);
    NhapMaTran(b, ca, cb);
    XuatMaTran(b, ca, cb);

    TinhTich2MaTran(a, b, t, da, ca, cb);
    XuatMaTran(t, da, cb);

    return 0;
}
