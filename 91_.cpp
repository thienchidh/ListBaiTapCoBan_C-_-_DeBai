/* Bài 91: In tất cả các số nguyên dương lẻ nhỏ hơn 100*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i <= 100; i++) {
        if(i & 1) {
            cout << i << " ";
        }
    }
    return 0;
}
