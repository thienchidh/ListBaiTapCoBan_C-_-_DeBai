//Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int s = 0;

    for(int i = 0; i < n; i++) {
        if(i & 1) {
            s+=i;
        }
    }

    cout << s << endl;
    return 0;
}
