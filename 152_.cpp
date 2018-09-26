/* Bài 152: Hãy tìm số hoàn thiện nhỏ nhất trong mảng 1 chiều các số nguyên.Nếu mảng không có số hoàn thiện thì trả về -1*/
#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
    if(n <= 0) {
        return false;
    }
    int s = 0, j;
    for(int i = 1; i <= sqrt(n); i++ ) {
        if(n % i == 0) {
            j = n/i;
            if(i != j) {
                s = s + i + j;
            } else {
                s = s + i;
            }
        }
    }
    return s-n == n;
}

int findMinPerfect(int *a, int n) {
    int Min = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] < Min && isPerfect(a[i])) {
            Min = a[i];
        }
    }

    if(Min == INT_MAX) {
        return -1;
    }
    return Min;
}

int main() {

    int *a;
    int n;
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << findMinPerfect(a, n) << "\n";

    delete[] a;

    return 0;
}
