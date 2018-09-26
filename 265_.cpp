/* Bài 265: Cho 2 mảng tăng. Hãy trộn thành 1 mảng giảm dầnKỹ thuật thêm*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 100
template <typename T> void nhap (T a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
template <typename T>void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SapXep(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void Tron2MangTangThanh1MangGiam(int a[], int b[], int c[], int na, int nb, int &nc) {
    nc = na + nb;         // Số phần tử mảng cần gộp
    SapXep(a, na);       // Sắp xếp mảng a tăng
    SapXep(b, nb);       // Sắp xếp mảng b tăng
    int vitriA = na - 1, vitriB = nb - 1;   // Chỉ số bắt đầu từ cuối mảng
    for(int i = 0; i < nc; i++) {     // Duyệt mảng cần gộp
        if(vitriA >= 0 && vitriB >= 0) { // Kiểm tra từng vị trí trong mảng A và mảng B xem có lớn hơn 0
            if(a[vitriA] > b[vitriB]) {   // So sánh xem phần tử của mảng nào lớn hơn (ở đầy là mảng a)
                c[i] = a[vitriA--];          // Đổ mảng a vào mảng cần gộp
            } else {
                c[i] = b[vitriB--];             // Ngược lại thì đổ mảng b vào mảng cần gộp
            }
        }
        // Xét thêm
        else if(vitriB < 0) {         // Nếu mà vị trí b tăng nhỏ hơn 0
            c[i] = a[vitriA--];            // Chỉ còn mảng a để đổ vào mảng cần gộp
        } else {
            c[i] = b[vitriB--];
        }
    }
}
int main() {
    int na, nb, nc;
    int a[MAX], b[MAX], c[MAX];

    nhap(a, na);
    xuat(a, na);

    nhap(b, nb);
    xuat(b, nb);

    Tron2MangTangThanh1MangGiam(a, b, c, na, nb, nc);
    xuat(c, nc);

    return 0;
}
