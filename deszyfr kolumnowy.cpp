#include <bits/stdc++.h>
using namespace std;
int main ()
{
	// k - wysokosc kolumny szyfru
	// n - liczba znakow tekstu
	// zal: n jest wielokrotnoscia k
	int k, n;
	cin>>k>>n;
	// s - tekst zaszyfrowany, t - tekst odszyfrowany
	string s, t;
	cin >> s;
	//set t as s so that they hve the same length and can be easily changed
	t = s;
	// po - pierwszy indeks dla nieparzystych (czytane od lewej do prawej)
	// ko - pierwszy indeks dla nieparzystych (czytane od prawej do lewej)
	// ind - poczatkowy indeks od ktorego uzupelniam wyrasz deszyfrowany
	// klucz = n/k => co ile bede sie iterowac aby odczytac szyfr
	int po = 0, ko = n/k - 1, ind = 0, klucz = n / k;
	//przecchodze po wszystkich mozliwych indeksach parzystych i nieparzystych
	while (po < n && ko >= 0)
	{
		for (int i = po; i <n; i+= klucz)
			{
				t[ind] = s[i]; 
				ind ++;
			}
		for (int i = n - ko; i >= 0; i -= klucz)
			{
				t[ind] = s[i]; 
				ind ++;
			}
			po += 2;
			ko -= 2;
	}
	cout << t;
}
