//Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n

#include <bits/stdc++.h>
using namespace std;

float x, S = 0, T = 1;
int i = 1, n;

int main(){
    cin >> x;
    x = 0 - x;

   do
	{
	cin >> n;
	if(n < 1)
	{
		break;
	}
	}while(n < 1);

	while(i <= n)
	{
		T = T * x;
		S = S + T;
		i++;
	}
	cout << (-S) << "\n";

	return 0;
}
