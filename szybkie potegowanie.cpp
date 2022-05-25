#include <bits/stdc++.h>
using namespace std;
long long potega (int x, int y)
{
	long long wynik = 1;
	while (y)
	{
		if (y%2 == 1)
			wynik*=x;
		y/=2;	
		x*=x;
	}
	return wynik;
}
int main ()
{
	int x, y;
	cin >> x >> y;
	cout << potega(x, y);
}
