#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
	return x*x;
	//wzor funkcji dla ktorej licze pole pod wykresem
}
int main ()
{
	double a, b, dx; //a - poczatek przedzialu, b  - koniec przedzialu
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj szerokosc prostokata: "; //jak maly ma byc jednostkowy prostokat
	cin >> dx; //delta x - ile mam sie przesunac na osi x
	//petla przesuwajaca sie od a do b o dane dx
	double x = a;
	double pole = 0;
	while (x < b)
	{
		x +=dx;
		//musze wyliczac pola pojedynczych prostokatow i dodawac je do calosciowego pola
		//biore wartosc funkcji dla skrajnie prawej wspolrzednej x wyznaczonego prostokata
		double pp = f(x) * dx;
		pole +=pp;
	}
	cout << "Pole wynosi: " << setprecision(2) << pole;
}
