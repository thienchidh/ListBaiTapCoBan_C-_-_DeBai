/* Bài 481: Hãy khai báo kiểu dữ liệu biểu diễn ngày trong thế giới thực và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;
struct Ngay {
    int Day, Month, Year;
};
typedef Ngay NGAY;

void NhapNgay(NGAY &);
void XuatNgay(NGAY);

void NhapNgay(NGAY &ng) {
    scanf("%d", &ng.Day);

    scanf("%d", &ng.Month);

    scanf("%d", &ng.Year);
}
void XuatNgay(NGAY ng) {
    printf("%d-%d-%d",ng.Day, ng.Month, ng.Year);
}

int main() {
    NGAY ng;
    NhapNgay(ng);
    XuatNgay(ng);

    return 0;
}
