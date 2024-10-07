#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for (int i = 2; i <= 300; i++)
	{
		bool isprime = true;
		
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				isprime = false;
				break;
			}
			
		}
		if (isprime)
		{
			cout << i << endl;
		}
	}
	
}