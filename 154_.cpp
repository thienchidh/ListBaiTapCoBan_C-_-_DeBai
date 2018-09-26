/* Bài 154: Hãy tìm vị trí giá trị âm nhỏ nhất trong mảng các số thực. Nếu mảngkhông có số âm thì trả về -1Bài tập luyện tập tư duy:*/
#include<bits/stdc++.h>
using namespace std;

int findNegativeValue(double *a, int n) {
    int Min = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] < a[Min] && a[i] < 0) {
            Min = i;
        }
    }

    if(Min == INT_MAX) {
        return -1;
    }
    return Min;
}

int main() {
    double *a;
    int n;
    cin >> n;
    a = new double[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << findNegativeValue(a, n) << "\n";

    delete[] a;
    return 0;
}
