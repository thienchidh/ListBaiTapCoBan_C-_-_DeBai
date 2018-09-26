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
int EqualDeg2(double a, double b, double c, double &x1, double &x2)    // Phương trình bậc 2
{
	int nSolution2; x1 = x1 = 0;                                      // Mặc định
	if(a == 0)
		nSolution2 = EqualDeg1(b,c, x1);
	else
	{
		double Delta = b * b - 4 * a * c; double two_a = 2 * a;
		if(Delta < 0)
			nSolution2 = NoSolution;                                  // Phương trình vô nghiệm
		else if(Delta == 0)
		{
			x1 = x2 = -b / two_a;
			nSolution2 = 1;                                           // Phương trình có 1 nghiệm kép
		}
		else
		{
			double sqrtDelta = sqrt(Delta);
			x1 = (-b - sqrtDelta) / two_a;
			x2 = (-b + sqrtDelta) / two_a;
			nSolution2 = 2;                                           // Phương trình có 2 nghiệm phân biệt
		}
	}
	return nSolution2;
}

int main(){

    double a, b, c, x1, x2;

	cout << "Input a = " ;
	cin >> a;
	cout << "Input b = " ;
	cin >> b;
	cout << "Input c = " ;
	cin >> c;
	double Delta = b * b - 4 * a * c; double two_a = 2 * a;
	int numSolution = EqualDeg2(a, b, c, x1, x2);
	cout << "So nghiem cua phuong trinh la: " << numSolution << endl;
	if(a == 0)
	{
		if(b != 0)
		cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 "   "la: " << x1 << endl;
	    else
		   if(c == 0)
		   cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 "    "la: vo so nghiem "  << endl;
		   else
		   cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 "    "la: vo nghiem "  << endl;
	}
	else
	{
		if(Delta < 0)
			cout << "Phuong trinh " << a << "x^2 + " << b << "x + " << c << " = 0 "    "la: vo nghiem " << endl;
		else if(Delta == 0)
			cout << "Phuong trinh " << a << "x^2 + " << b << "x + " << c << " = 0 "    "co 1 nghiem kep la: x1 = x2 = " << x1 << endl;
		else
			cout << "Phuong trinh " << a << "x^2 + " << b << "x + " << c << " = 0 "    "co 2 nghiem phan biet: " << x1 << " va " << x2 << endl;
	}
	return 0;
}
