#include <bits/stdc++.h>
using namespace std;
string liczba(int x, int p)
{
	string s = "";
	while (x!=0)
	{
		s = char(x%p +48) + s;
		x/=p;
	}
	return s;
	
}
int main ()
{
	//z dziesietneg na inny
	int x, p;
	cin >> x >> p;
	cout <<liczba (x, p);
}
