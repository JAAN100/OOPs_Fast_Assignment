#include <iostream>
using namespace std;
int main()
{
	const int N = 10;
	int num[N];
	int sum = 0;
	double avg = 0;
	int below_avg = 0, above_avg = 0;

	for (int i = 0; i < N; i++)
	{
		cout << "Enter " << i + 1 << " number = ";
		cin >> num[i];
	}
	for (int i = 0; i < N; i++)
	{
		sum = sum + num[i];
	}
	avg = static_cast<double>(sum) / N;
	for (int i = 0; i < N; i++)
	{
		if ( num[i] > avg)
		{
			above_avg++;
		}
		else if (num[i] < avg)
		{
			below_avg++;
		}
		
	}

	cout << "The average of " << N << " numbers is = " << avg << endl;
	cout << "The numbers which are above of the average are = " << above_avg << endl;
	cout << "The numbers which are below of the average are = " << below_avg << endl;
	return 0;
}
