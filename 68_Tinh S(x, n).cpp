//Bài 68: Tính S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n

#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, n;
	float x, T, S;
	i = 1;
	T = 1;
	S = 0;
	cin >> x;
	//x = -x;

	cin >> n;

	while(i <= n)
	{
		T = pow(x, (2 * i )) * pow(-1, (float)i);
		S = S + T;
		i++;
	}
	cout << S;
    return 0;
}
