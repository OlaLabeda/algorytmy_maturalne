#include <bits/stdc++.h>
using namespace std;
int szukaj (string wzorzec, string tekst)
{
	for (int i = 0; i <= tekst.size() - wzorzec.size(); i++)
	{
		int c = 0;
		for (int j = 0; j < wzorzec.size(); j++)
		{
			if (wzorzec[j] != tekst[i+c])
				break;
			if (j == wzorzec.size() -1)
				return i+1;
			c++; //iteruje sie przez wszytskie pozycje wzorca porownujac z tekstem
		}
	}
	return -1;
}
int main ()
{
	string wzorzec, tekst;
	cin >> tekst >> wzorzec;
	int pos = szukaj(wzorzec, tekst);
	if (pos == -1)
		cout << "Wzorca nie odnaleziono ";
	else
		cout << "Wzorzec znaleziono na pozycji: " << pos;
	return 0;
	
}
