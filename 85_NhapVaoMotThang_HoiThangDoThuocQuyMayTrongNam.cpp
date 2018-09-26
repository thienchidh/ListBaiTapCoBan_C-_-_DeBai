//Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm
#include<bits/stdc++.h>

using namespace std;

int main() {

    int thang;
    cin >> thang;
    switch (thang) {
    case 1:
    case 2:
    case 3:
        cout << "I\n";
        break;
    case 4:
    case 5:
    case 6:
        cout << "II\n";
        break;
    case 7:
    case 8:
    case 9:
        cout << "III\n";
        break;
    case 10:
    case 11:
    case 12:
        cout << "IV\n";
        break;
    default:
        cout << "Nhap sai\n";
    }

    return 0;
}
