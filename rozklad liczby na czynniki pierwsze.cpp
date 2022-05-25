#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, pierw;
	cin >> n;
	pierw = sqrt(n);
	int k = 2;
	while (n > 1 && k <= pierw)
	{
		while (n%k == 0)
		{
			cout << k << " ";
			n/=k;
		}
		k++;
	}
	if (n > 1)
		cout << n;
	return 0;
}
