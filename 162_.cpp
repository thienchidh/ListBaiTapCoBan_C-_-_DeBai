/* Bài 162: Cho mảng 1 chiều các số thực. Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện: có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận. Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị -1*/
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

int timvitrithoaDK(int a[], int n) {
    int i = 1;
    for(; i < n - 1; i++) {
        if(a[i] == a[i - 1] * a[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    int a[MAX];
    int x, y;

    nhap(a, n);
    xuat(a, n);

    cout << timvitrithoaDK(a, n);

    return 0;
}
