#include <iostream>
#include <cmath>
using namespace std;
void sieve (int arr[], int n)
{
	//set arr[0] and arr[1] as '0', cause you are sure 0 and 1 are not prime
	arr[0] = 0; arr[1] = 0;
	//set the rest of guys as 1, you want to make sure if they are prime
	for (int i = 2; i <=n; i++)
		arr[i] = 1;
	//don't forget theres a max n number
	//im iterating through guys from 2 to sqrt of n,
	//theres no need to check more numbers, because if they are not prime,
	//they will be multiples of previously checked number, which means
	//they will be set as 0 during the later steps of an algorithm, or they are prime
	for (int i = 2; i <= sqrt(n); i++)
	{
		//if its 1, it means number wasnt previously set as not prime
		if (arr[i] == 1) //setting multiples of a given number as not prime
			for (int j = i * i; j <= n; j+=i)
			{	
				arr[j] = 0;
			}
	}
}
int main ()
{
	int n; //maximum value that is about to be checked
	cin >> n;
	int arr[n+1];
	sieve(arr, n);
	cout << arr[13];
}
