#include <iostream>
using namespace std;

void tic_tac_toe(char a1, char b1, char c1, char a2, char b2, char c2, char a3, char b3, char c3)
{
	cout << a1 << " | " << b1 << "| " << c1
		<< "\n--|--|-- \n "
		<< a2 << "| " << b2 << "| " << c2
		<< "\n--|--|-- \n"
		<< a3 << " | " << b3 << "| " << c3 << endl;
}
bool checkWin(char player, char a1, char b1, char c1, char a2, char b2, char c2, char a3, char b3, char c3)
{
	//Row check
	if (a1 == player && b1 == player && c1 == player ||
		a2 == player && b2 == player && c2 == player ||
		a3 == player && b3 == player && c3 == player)
	{
		return true;
	}
	// Coloumn check
	else if (a1 == player && a2 == player && a3 == player ||
		b1 == player && b2 == player && b3 == player ||
		c1 == player && c2 == player && c3 == player)
	{
		return true;
	}
	//Diagnols check 
	else if (a1 == player && b2 == player && c3 == player ||
		c1 == player && b2 == player && a3 == player)
	{
		return true;
	}
	return false;

}
int main()
{
	char a1 = ' ', b1 = ' ', c1 = ' ',
		a2 = ' ', b2 = ' ', c2 = ' ',
		a3 = ' ', b3 = ' ', c3 = ' ';
	tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
	cout << "Lets play Tic-Tac-Toe : " << endl;
	char player = 'X';
	int row, coloumn;
	for (int i = 1; i <= 9; i++)
	{
		cout << "Enter " << player << " player the Row and colomn number (1 to 3) :";
		cin >> row >> coloumn;
		
		if (a1 == ' ' && row == 1 && coloumn ==1)
		{
			a1 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			

		}
		else if (b1 == ' ' && row == 1 && coloumn == 2)
		{
			b1 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			

		}
		else if (c1 == ' '  && row == 1 && coloumn == 3)
		{
			c1 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			
		}
		else if (a2 == ' ' && row == 2 && coloumn == 1)
		{
			a2 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			
		}
		else if (b2 == ' ' && row == 2  && coloumn == 2)
		{
			b2 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			
		}
		else if (c2 == ' ' && row == 2 && coloumn == 3)
		{
			c2 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			
		}
		else if (a3 == ' ' && row == 3  && coloumn == 1)
		{
			a3 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			
		}
		else if (b3 == ' ' && row == 3  && coloumn == 2)
		{
			b3 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			
		}
		else if (c3 == ' ' && row == 3  && coloumn == 3)
		{
			c3 = player;
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);

		}
		else
		{
			cout << "Invalid input Please enter again" << endl;
			i--;
			continue;
		}


		if (checkWin(player, a1, b1, c1, a2, b2, c2, a3, b3, c3))
		{
			tic_tac_toe(a1, b1, c1, a2, b2, c2, a3, b3, c3);
			cout << "The player " << player << " wins!" << endl;
			return 0;
		}

		if (player == 'X')
		{
			player = 'o';
		}
		else
		{
			player = 'X';
		}
	}
	cout << "It's a draw match.";
	return 0;

}