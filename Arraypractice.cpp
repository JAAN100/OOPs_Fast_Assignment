#include <iostream>
using namespace std;
int main()
{
	int row = 0, col = 0;
	cout << "Enter the rows " << endl;
	cin >> row;
	cout << "Enter the col " << endl;
	cin >> col;
	int** ptr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		ptr[i] = new  int[col];
	}
	/*for (int i = 0; i < row; i++)
	{
		cout << " Enter the marks " << i + 1 << ": ";
		for (int j= 0; j < col; j++)
		{
			cin >> *(*(ptr + i) + j);
		}
	}*/
	for (int i = 0; i < row; i++)
	{
				for (int j = 0; j < col; j++)
		{
			cout<<  " * ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
	{
		delete ptr[i];
	}
	delete[] ptr;
	ptr = nullptr;
    //hello
}