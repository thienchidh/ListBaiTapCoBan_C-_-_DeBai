/* Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị2003. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1*/
#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;
void nhap (float a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(float a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

float dautien(float a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] > 2003) {
            return a[i];
        }
    }
    return -1;
}
int main() {
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, n);
    xuat(a, n);
    cout << dautien(a, n) << endl;
    return 0;
}
