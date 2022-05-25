#include <bits/stdc++.h>
using namespace std;
//arr - will have list of needed coins
int ans[100];

int findMinCoins(int coins[], int size,  int value)
{
	int i, count = 0;
	for (i = 0; i < size; i++)
	{
		//take as much from coins[i]
		while (value >= coins[i])
		{
			//after taking the coins, reduce the value
			value-= coins[i];
			ans[count] = coins[i];
			count ++;
		}
		if (value == 0)
		break;
	}
    return count;
}

int main()
{
    int coins[] = {14, 2 , 1}; // SORTED DESCENDING
    int value = 105, i;

    //find the size of the coins array
    int size = 3;
    int MinCount = findMinCoins(coins,size,value);
	cout << "Total Coins Needed: " << MinCount << "\n";
	cout << "Coins are: ";
	for (int i = 0; i < MinCount; i++)
		cout << ans[i]<< " ";
    return 0;
}
