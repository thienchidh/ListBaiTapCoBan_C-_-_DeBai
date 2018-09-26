#include<bits/stdc++.h>

using namespace std;

const int NoSolution = 0, Undetermined = -1;
int EqualDeg1(double a, double b, double &x)                            // Phương trình bậc 1
{
	int nSolution1;                                                     // Số nghiệm
	if(a != 0)
	{
		x = -b / a;
		nSolution1 = 1;
	}
	else                                                               // a = 0
	{
		x = 0;
		if(b == 0)
			nSolution1 = Undetermined;                                  // Phương trình vô định ( có vô số nghiệm)
		else
			nSolution1 = NoSolution;                                    // Phương trình vô nghiệm
	}
	return nSolution1;
}

int main(){
    double a, b, x;
	cout << "Input a = " ;
	cin >> a;
	cout << "Input b = " ;
	cin >> b;

	int nSolution = EqualDeg1(a, b, x);
        cout << "So nghiem cua phuong trinh la: " << nSolution << endl;
	if(a != 0)
        cout << "Nghiem cua phuong trinh " << a << "x + " << b << " = 0 "    "la: " << x << endl;
	else
		if(b == 0)
            cout << "Nghiem cua phuong trinh " << a << "x + " << b << " = 0 "    "la: vo so nghiem "  << endl;
		else
            cout << "Nghiem cua phuong trinh " << a << "x + " << b << " = 0 "    "la: vo nghiem "  << endl;

		return 0;
}
