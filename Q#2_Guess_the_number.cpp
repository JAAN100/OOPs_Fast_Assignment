#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Let's Play a game think a number between 1 - 100 in your mind \nI will guess that number by asking some simple questions. " << endl;
	int N = 50, Z = 25;
	char ask;

	while (cout << "Enter 'Y' if the number you guess is greater than : " << N << " otherwise enter 'N' : "
		, cin >> ask, cout << endl, ask == 'y' || ask == 'Y' || ask == 'n' || ask == 'N')
	{
		if (ask == 'y' || ask == 'Y')
		{
			N = N + Z;
		}
		else
		{
			N = N - Z;
		}
		Z = Z / 2;
		if (Z == 0)
		{
			if (ask == 'Y' || ask == 'y')
			{
				N += 2;

			}
			else
			{
				N -= 2;

			}
		}
		if (Z == 0 && N > 75)
		{
			if (N % 2 == 0)
			{
				N = N - 1;
			}
			if (N % 2 != 0)
			{
				N = N + 1;
			}
			break;
		}
		if ( Z == 0)
		{
			break;
		}

	}

	if (N < 1)
	{
		N = 1;
	}
	if (N > 100)
	{
		N = 100;		
	}

	cout << "The number you are thinking in your mind is = " << N << endl;


}