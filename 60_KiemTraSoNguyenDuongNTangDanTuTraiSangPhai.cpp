#include<bits/stdc++.h>
#include<string>
#define ll unsigned long long
using namespace std;

void printBool(bool b){
    cout << (b ? "YES": "NO");
}

bool KiemTraTangDanTuTraiSang(ll n){
    stringstream ss;
    ss << n << endl;
    string s = ss.str();

    for(int i = 0; i < s.length() - 2; i++){
        if(s[i] >= s[i + 1]){
            return false;
        }
    }

    return true;
}


int main(){
    ll n;
    cin >> n;

    printBool(KiemTraTangDanTuTraiSang(n));

    return 0;
}
