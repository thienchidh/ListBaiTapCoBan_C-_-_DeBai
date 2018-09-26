/* Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93 */
#include<bits/stdc++.h>
using namespace std;

int main() {

    for(int i = 0; i <= 100; i++){
        if(i == 5 || i == 7 || i == 93){
            continue;
        }else{
            if(i & 1){
               cout << i << " ";
            }
        }
    }
    return 0;
}
