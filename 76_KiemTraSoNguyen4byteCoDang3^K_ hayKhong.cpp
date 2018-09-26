//Bài 76: Kiểm tra số nguyên 4 byte có dạng 3^k hay không
#include <bits/stdc++.h>

using namespace std;
/* Số có dạng 3^k
3^1 = 3
3^2 = 9
3^3 = 27
3^4 = 81

VD: kiểm tra số 81
81 % 3 = 27 dư 0
27 % 3 = 9 dư 0
9 % 3 = 3 dư 0
3 % 3 = 1 dư 0 => hết

VD: kiểm tra số 12
12 % 3 = 4 dư 0
4 % 3 = 1 dư 1 ==> sai
*/
bool check(int n) {
    n = abs(n);
    if(n < 2)
        return true;
    while(n > 1) {
        if(n % 3 != 0)  // nếu dư mà khác 0. lập tức báo sai
            return false;
        n /= 3;
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

