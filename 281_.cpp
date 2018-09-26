/* Bài 281: Hãy đưa chẵn về đầu, lẻ về cuối, phần tử 0 nằm giữa mảng*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
template <typename T> void nhap (T a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
template <typename T>void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void DuaChanVeDau(int a[], int ViTriDoi) {
    int tam = a[ViTriDoi];           // biến tạm lưu tất cả các giá trị thỏa ĐK đổi
    for(int i = ViTriDoi; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = tam;
}

void Dua0VaoGiua(int a[], int ViTriDoi, int ViTriChanCuoi) {
    // Do 0 nằm giữa mảng nên 0 sẽ là giá trị chẵn cuối để thỏa yêu cầu bài toán
    for(int i = ViTriDoi; i > ViTriChanCuoi; i--) {
        a[i] = a[i - 1];
    }
    a[ViTriChanCuoi] = 0;
}

void DuaChanVeDauLeVeCuoi0NamGiuaMang(int a[], int n) {
    int i, dem;
    int ViTriChanCuoi = 0;
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0 && a[i] != 0) {
            DuaChanVeDau(a, i);
        }
    }
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            ViTriChanCuoi = i;
            break;
        }
    }
    for(i; i < n; i++) { // bỏ khởi tạo i để tránh dư 1 số 0
        if(a[i] == 0) {
            Dua0VaoGiua(a, i, ViTriChanCuoi);
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DuaChanVeDauLeVeCuoi0NamGiuaMang(a, n);
    xuat(a, n);

    return 0;
}
