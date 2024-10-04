#include  <iostream>
using namespace std;
int main()
{
	char V;
	cout << "Enter an Alphabet to check weather the alphabet is vowel or not : ";
	cin >> V;
	switch (toupper(V))
	{
		case 'A':
			cout << "Yes it is an integer ";
			break;
		case 'E':
			cout << "Yes it is an integer ";
			break;
		case 'I':
			cout << "Yes it is an integer ";
			break;
		case 'O':
			cout << "Yes it is an integer ";
			break;
		case 'U':
			cout << "Yes it is an integer ";
			break;
		default:
			cout << "It not an integer";
		break;
	}
}