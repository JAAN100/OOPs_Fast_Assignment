#include <iostream>
#include <cmath>
#include <cstdlib> 
using namespace std; 

void two_complex_root( double & complex_root_one , double & complex_root_two ,const int disc , const double a , const double b  )
{
	int disc_s = abs(disc);
	
	if (disc_s % 2 == 0)
	{
	
		// Complex root one with square
		complex_root_one = sqrt(disc_s) / (2 * a);

		//Complex root two with square
		complex_root_two = sqrt(disc_s) / ( 2 * a );
	 
		cout << "The 1 complex root is  = " << -b / (2 * a) << " +  i " << complex_root_one << endl;
		cout << "The 2 complex root is  = " << -b / (2 * a) << " - i " << complex_root_two << endl;
	}
	else
	{

		// Set locale to support UTF-8
		setlocale(LC_ALL, "");

		// Unicode character for square root
		const wchar_t sqrtSymbol = L'\u221A';

		cout << "The 1 Complex root is = " << - b / (2 * a) << " + i ";
		std::wcout << sqrtSymbol << disc_s << " / " << 2 * a << endl;

		cout << "The 2 complex root is =  " << - b / (2 * a) << " - i ";
		std::wcout << sqrtSymbol << disc_s << " / " << 2 * a << endl;

	}
}

// Calculating Twwo real roots (Rational / Irrational)
 void two_real_pos_roots(double & real_root_one , double & real_root_two , const int disc  , const double a ,const double b)
{
	
	//Rational Calculating  
	if (disc % 2 == 0 )
	{
		cout << endl;
		//Real One root
		real_root_one = (- b + sqrt(disc)) / (2 * a);

		//Real two root 
		real_root_two = (- b - sqrt(disc)) / (2 * a);

		cout << "The 1 Real Root is = " << real_root_one << endl;

		cout << "The 2 Real Root is = " << real_root_two << endl;

	}
	//Irrational Calculational
	else
	{
		cout << endl ;

		// Set locale to support UTF-8
		setlocale(LC_ALL, "");

		// Unicode character for square root
		const wchar_t sqrtSymbol = L'\u221A';

		cout << "The Irrational roots are = - " << b << " + ";
		std::wcout << sqrtSymbol << disc << " / " << 2 * a << endl;

		cout << "The Irrational roots are = - "  << b << " - ";
		std::wcout << sqrtSymbol << disc << " / " << 2 * a << endl;
		
	}
}

// Discremenent for quadratic equation
int create_disc(double a, double b , double c)
{
	double disc;
	disc = b * b - 4 * a * c;
	return disc;

}

int main()
{
	// Input all numbers 
	double a, b, c;
	cout << "Enter the value of 'a' = ";
	cin >> a;
	cout << "Enter the value of 'b' = ";
	cin >> b;
	cout << "Enter the value of 'c' = ";
	cin >> c;
	double disc = 0;
	double root_one = 0 , root_two = 0;
	// Calculating discremenent 
	disc = create_disc(a, b, c);
	cout <<"The discrementt is = " << disc << endl;
	
	// Real Roots processing 
	if (disc > 0)
	{
		two_real_pos_roots( root_one , root_two , disc , a ,b );

	}

	//One real root 

	else if ( disc == 0)
	{
		cout << " The Real Root is = " << - b / ( 2 *  a) <<endl;
	}

	//Complex roots Processing   

	else if (disc < 0)
	{
		two_complex_root( root_one , root_two , disc , a , b);
	}
	
	
}