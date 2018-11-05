/* Bài 461: Sắp chéo phụ giảm dần */
#include<bits/stdc++.h>
#define MAX 100

using namespace std;

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
void SapXepCheoPhuGiamDan(int a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int max = a[i][n - 1 - i];
            if(a[j][j - 1 - i] > max) {
                max = a[j][n - 1 - j];
                a[j][n - 1 - j] = a[i][n - 1 - i];
                a[i][n - 1 - i] = max;
            }
        }
    }
}

int main() {
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    SapXepCheoPhuGiamDan(a, n);
    XuatMaTran(a, n);
    return 0;
}
