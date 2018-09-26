/* Bài 254: Hãy đếm giá trị trong mảng thỏa: lớn hơn tất cả các giá trị đứng đằng trước nóKỹ thuật sắp xếp*/
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
int DemPhanTuLonNhatDungSau(int a[], int n) {
    int dem = 0;
    for(int i = 1; i < n; i++) {
        int flag = 1;
        for(int j = 0; j < i; j++) {
            if(a[i] < a[j] || a[i] == a[j]) {
                flag = 0;
            }
        }
        if(flag == 1) {
            dem++;
        }
    }
    return dem;
}
int main() {
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int dem = DemPhanTuLonNhatDungSau(a, n);
    cout << dem << endl;
    return 0;
}
