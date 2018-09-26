/* Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm sốf(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5*/
#include<bits/stdc++.h>
using namespace std;

float Tinh(float x) {
    float ketqua;
    if(x >= 5)
        ketqua = 2 * x * x + 5 * x + 9;
    else
        ketqua = -2 * x * x + 4 * x - 9;
    return ketqua;

}
int main() {
    float x;
    cin >> x;
    float ketqua = Tinh(x);
    cout << ketqua<< endl;

    return 0;
}
