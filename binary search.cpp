#include <bits/stdc++.h>
using namespace std;
long long tab[10000];
int szukaj (int l, int p, long szukana)
{
	int sr;
	while (l <= p)
	{
		sr = l + (p-l) / 2;
		if (tab[sr] == szukana)
			return sr;
		if (tab[sr] > szukana)
			p = sr - 1;
		else
			l = sr + 1;
	}
	return -1;
}
int main ()
{
	long long n, szukana;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	cin >> szukana;
	int pozycja = szukaj(0, n-1, szukana);
	if (pozycja == -1)
		cout << "liczba nie wystepuje w zbiorze ";
	else 
		cout << pozycja;
}
