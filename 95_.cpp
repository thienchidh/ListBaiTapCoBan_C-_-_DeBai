/* Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó*/
#include<bits/stdc++.h>
using namespace std;

double a[3];

int main() {
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
        a[i] = abs(a[i]);
    }

    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
