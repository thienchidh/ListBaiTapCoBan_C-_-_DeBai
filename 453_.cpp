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

int DemSoLuongSoDuongTrenDuongCheoChinh(int a[][MAX], int n) {
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(a[i][i] > 0) {
            dem++;
        }
    }
    return dem;
}
int main() {
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    int dem = DemSoLuongSoDuongTrenDuongCheoChinh(a, n);
    cout  << dem << endl;
    return 0;
}
