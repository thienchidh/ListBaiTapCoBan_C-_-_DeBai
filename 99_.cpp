/* Bài 99: Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theothứ tự tăng dần mà chỉ dùng tối đa 1 biến phụ*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    /*
    a  b  c
    5  4  7
    Giống Interchange sort
    a so sánh với b và c
    b so sánh với c
    */
    int a, b, c, temp;
    cin >> a >> b>> c;

    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}
