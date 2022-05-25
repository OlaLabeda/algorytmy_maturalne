#include <bits/stdc++.h>
using namespace std;
bool czypierwsza (int n)
{
	if (n == 1) return 0;
	for (int i =2; i*i <=n; i++)
	{
		if (n%i==0)
			return 0;
	}
	return 1;
}
void czysfeniczna(int n)
{
	//tablica na dzielniki liczby
	int tab[8]={0};
	int ile = 0; //zliczam dzielniki
	//korzystam z faktu, ze liczba sfeniczna posiada dokladnie 8 dzielnikow calkowitych
	int ind = 0; //indeksy w ktore bede wstawiac DZIELNIKI PIERWSZE
	for (int i = 1; i <=n; i++)
	{
		if (n%i==0 && ile <9) //jesli liczba jest dzielnikiem i dzielnikow jest mniej niz 9
		{
			if (czypierwsza(i)) //sprawdzam czy pierwsza, jeslei tak, to wstawiam w tablice dzielnikow pierwsszych i zwiekszam indeks
			{	
				tab[ind] = i; 
				ind++;
			}
			ile++; // zwiekszam liczbe dzielnikow
		}
	}
	if (ile == 8) //jesli liczba ma dokladnie 8 dzielnikow, to wypisuje dzielniki pierwsze zapisane w tablicy
		cout<< tab[0] << " "<< tab[1] << " " << tab[2];
	else
	cout << "NIE";
}
int main ()
{
	int n;
	cin >>n;
	czysfeniczna(n);
}
