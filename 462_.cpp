/* Bài 462: Hoán vị 2 dòng*/
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


void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][MAX], int n, int dong1, int dong2) {
    if((dong1 >= 0 && dong1 < n) && (dong2 >= 0 && dong2 < n)) {
        for(int j = 0; j < n; j++) {
            HoanVi(a[dong1][j], a[dong2][j]);
        }
    }
}

int main() {
    int a[MAX][MAX], n, dong1, dong2;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    cin >> dong1;

    cin >> dong2;

    HoanVi2Dong(a, n, dong1, dong2);


    XuatMaTran(a, n);


    return 0;
}
