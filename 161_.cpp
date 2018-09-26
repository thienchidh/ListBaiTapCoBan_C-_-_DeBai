/* Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1*/
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
    cout << "\n";
}

int dautientrongdoan(int a[], int n, int x, int y) {
    int dem = 0;
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] >= x && a[i] <= y) {
            dem++;
            break;
        }
    }
    if(dem == 0) {
        return x;
    }
    return a[i];
}
int main() {
    int n;
    int a[MAX];
    int x, y;

    cin >> x >> y;

    nhap(a, n);
    xuat(a, n);

    cout << dautientrongdoan(a, n, x, y);
    return 0;
}
