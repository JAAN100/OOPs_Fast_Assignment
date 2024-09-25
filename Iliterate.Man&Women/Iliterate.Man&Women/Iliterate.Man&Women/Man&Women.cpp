#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	float total_men = 0.52 ;
	float town_total_literacy = 0.48 ;
	float literate_men = 0.35 ;
	float total_population = 80000;
	float total_women = 0;
	float literate_women  = 0 ;
	float illiterate_men = 0 , illiterate_women = 0 ;
	// Calculating Total illiterate Men & Women
	
	//Total literacy in town = Total literacy of town * Total Population
	
	town_total_literacy =  total_population * town_total_literacy;
	cout << "Total literacy of town = "  << town_total_literacy << endl;
	//Total men in town = Total Population * Total men in town

	total_men = total_population * total_men;
	cout << "Total Men in town = " << total_men << endl;

	//Total women in town =  Total population - Total men

	total_women = total_population - total_men;
	cout << "Total Wonen in town = " << total_women << endl;

	//Total literate men = Total population * Total literate men

	literate_men = total_population * literate_men;
	cout << "Total Literate Men in town = "  << literate_men << endl;

	//Total literate women = Total literacy of town - Total literate men 
	literate_women = town_total_literacy - literate_men;
	cout << "Total literate women in town = " << literate_women <<endl ;


	//Illiterate men = Total men in town - Total literate men
	illiterate_men = total_men - literate_men;
	cout << "Total Illiterate Men in town = "  << illiterate_men << endl;

	//Illiterate women = Total women in town - Total literate women 
	illiterate_women = total_women - literate_women;
	cout << "Total Illiterate Women in town = "  << illiterate_women << endl;

}