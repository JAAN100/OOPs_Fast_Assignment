#include <iostream>
using namespace std;
int main()
{
	int n , length = 1;
	cout << "Enter the value of n = ";
	cin >> n;
	cout << n << " -> ";
	while (n != 1)
	{
		
		if (n % 2 ==  0)
		{
			n = n / 2;
			length++;
			cout << n << " -> ";
		}
		else 
		{
			n = 3 * n + 1;
			length++;
			cout << n << " -> ";
		}
	}
	cout <<"The length of the n = " << length << endl;
}