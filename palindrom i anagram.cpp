#include <bits/stdc++.h>
using namespace std;
bool czypalindrom(string s)
{
	int i = 0, j = s.size() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}
bool czyanagram(string a, string b)
{
	int dl1 = a.size(), dl2 = b.size();
	if (dl1 != dl2) return 0;
	int licz[127] = {}; //zeruje tablice
	for (int i = 0; i < dl1; i++)
	{
		licz[a[i]] ++;
		licz[b[i]] --;
	}
	for (int i = 0; i < 127; i++)
	{
		if (licz[i] != 0)
			return 0;
	}
	return 1;
}
int main ()
{
	string s, s2;
	cin >> s >> s2;
	cout << czypalindrom(s) << endl << czyanagram(s, s2);
}
