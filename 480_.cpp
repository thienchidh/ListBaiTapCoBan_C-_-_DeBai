/* Bài 480: Hãy khai báo kiểu dữ liệu để biểu diễn khái niệm đa thức 1 biến trong toán học:P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 và định nghĩa hàm nhập và hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;

struct DaThuc {
    float a[100];
    int n;
};
typedef struct DaThuc DATHUC;

void NhapDaThuc(DATHUC &);
void XuatDaThuc(DATHUC);

void NhapDaThuc(DATHUC &dt) {
    scanf("%d", &dt.n);
    for(int i = dt.n; i >= 0; i--) {
        float temp;
        scanf("%f", &temp);
        dt.a[i] = temp;
    }
}

void XuatDaThuc(DATHUC dt) {
    for(int i = dt.n; i > 0; i--) {
        printf("%.3fx^%d + ", dt.a[i], i);
    }
    printf("%.3fx^%d", dt.a[0], 0);
}

int main() {
    DATHUC dt;
    NhapDaThuc(dt);
    XuatDaThuc(dt);
    return 0;
}
