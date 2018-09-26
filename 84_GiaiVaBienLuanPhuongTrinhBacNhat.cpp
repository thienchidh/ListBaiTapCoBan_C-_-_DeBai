//Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0
#include<bits/stdc++.h>

using namespace std;

int main() {
    float a, b, x;
    cin >> a >> b;

    if(a == 0) {
        if(b == 0)
            printf("vo so nghiem\n");
        else
            printf("vo nghiem\n");
    } else {
        x = -b / a;
        cout << x << "\n";
    }
    return 0;

}
