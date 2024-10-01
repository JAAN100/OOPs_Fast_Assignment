#include <iostream>
#include <cmath>
using namespace std;

//Fictorial
double cal_fictorial(double x)
{
	double result = 1;
	for (int i = 1; i < x; i++)
	{
		result *= i;
	}
	return result;
}

//CAlculatig sine
double cal_Sine(double x)
{
	double sine = 0  ;
	int j = 1;
	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 != 0)
		{
			i = cal_fictorial(j);
		}
		if (i % 2 != 0 || i == 3)
		{
			sine -= pow(x, j) / i;
		}
		else
		{
			sine += pow(x, j) / i;
		}
		j++;
	}
	return sine;
}

int main()
{
	double x = 0;
	cout << "Enter the value of 'x' = ";
	cin >> x;
	double sine ;

	//Calculating sine
	sine = cal_Sine(x);
	cout << "The value of Sin(x) = " << sine << endl;
	return 0;
}