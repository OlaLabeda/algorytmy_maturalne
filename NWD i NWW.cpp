#include <iostream>
using namespace std;
int NWD(int a, int b)
{
	int pom;
	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}
int NWD_nieoptymalny(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int NWW(int a, int b)
{
	return a*b / NWD(a, b);
}
int main ()
{
	int a, b;
	cin >> a >> b;
	cout << NWD(a, b) << "\n";
	cout << NWW(a, b) << "\n";
}
