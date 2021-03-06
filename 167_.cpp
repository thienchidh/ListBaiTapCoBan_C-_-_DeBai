/* Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
void nhap (int a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int KiemTraToanLe(int n) {
    int dv;
    while (n != 0) {
        dv = n % 10;
        if (dv % 2 == 0)
            return 0;
        n = n / 10;
    }
    return 1;
}

int TimSoToanChuSoLeMax(int a[], int n) {
    int max;
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(KiemTraToanLe(a[i]) == 1) {
            max = a[i]; // max lúc này là a[i]
            dem++;  // Đếm là 1
            break;     // lập tức thoát ra
        }
    }
    if(dem == 0) {
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if (KiemTraToanLe(a[i]) == 1) {
            max = ( max > a[i]) ? max : a[i] ;
        }
    }
    return max;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    cout << TimSoToanChuSoLeMax(a, n);
    return 0;
}
