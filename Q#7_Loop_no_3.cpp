#include <iostream>
using namespace std;
int call_fictorial(int x)
{
	int result = 1;
	for (int i = 1; i <= x; i++)
	{
		result *= i;
	}
	return result;
}
int main()
{
	int N = 7;
	double sum = 0.0;
	for (int i = 1; i <= N; i++)
	{
		int fictorial = call_fictorial(i);
		sum += static_cast<double>(i) / fictorial;

	}
	cout << "The series is = " << sum << endl;
}