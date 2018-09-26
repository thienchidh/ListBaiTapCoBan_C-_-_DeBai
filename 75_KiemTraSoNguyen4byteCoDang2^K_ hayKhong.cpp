//Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không
#include <bits/stdc++.h>

using namespace std;
/* Số có dạng 2^k
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16

VD: kiểm tra số 81
16 % 2 = 8 dư 0
8 % 2 = 4 dư 0
4 % 2 = 2 dư 0
2 % 2 = 1 dư 0 => hết

VD: kiểm tra số 12
12 % 2 = 6 dư 0
6 % 2 = 3 dư 0
3 % 2 = 1 dư 1 => sai !
*/
bool check(int n) {
    n = abs(n);
    if(n < 2)
        return true;
    while(n > 1) {
        if(n % 2 != 0)  // nếu dư mà khác 0. lập tức báo sai
            return false;
        n /= 2;
    }
    return true;
}
int main() {
    int i;
    int Max = 10000;

    for(i = 0; i < 10000; i++)
        if(check(i))
            cout << i << " ";
    return 0;
}

