#include <bits/stdc++.h>
using namespace std;
string koduj(string s, int klucz)
{
	for (int i = 0; i < s.size(); i++)
		{
			toupper(s[i]); // zmiana znaku na duza literke
			if (int(s[i])+ klucz <= 90)
				s[i] = char(s[i] + klucz);
			else 
				s[i] = char(s[i] + klucz - 26);
		}
	return s;
}
string dekoduj(string s, int klucz)
{
	for (int i = 0; i < s.size(); i++)
		{
			toupper(s[i]);
			if (int(s[i]) - klucz >= 65)
				s[i] = char(s[i] - klucz);
			else 
				s[i] = char(s[i] - klucz + 26);
		}
	return s;	
}
int main ()
{
	string s;
	cin >> s;
	int klucz; // (0, 26>
	cin >>klucz;
	klucz%=26;
	cout << int('Z');
	cout << koduj(s, klucz) << endl;
	cout << dekoduj(koduj(s, klucz), klucz);
}
