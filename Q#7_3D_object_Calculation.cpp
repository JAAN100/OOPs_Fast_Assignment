#include <iostream>
#include <cmath>
using namespace std;

//Calculating cylinder volume
void displayCylinderVolume(double cylinder, double r, double H, const double Pi)
{
	cout << "Enter the radius 'r' of the given Cylinder = ";
	cin >> r;
	cout << "Enter the height 'H' of the given Cylinder = ";
	cin >> H;
	cylinder = Pi * (pow(r, 2)) * H;
	cout << "The total volume of the cylinder is = " << cylinder  << " m�" << endl;
}

//Calculating prism volume
void displayPrismVolume(double prism , double Aoft ,double b ,double h ,double H)
{
	cout << "Enter the base 'b' of triangle = ";
	cin >> b;
	cout << "Enter the height 'h' of triangle = ";
	cin >> h;
	Aoft = 0.5 * (b * h);
	cout << "Enter the height 'H' of the triangle prism = ";
	cin >> H;
	prism = Aoft * H;
	cout << "The Total volume of the prism is = " << prism << " m�" << endl;
}

//Calculating sphere volume
void displaySphereVolume(double sphere , double r ,const double Pi)
{
	cout << "Enter the 'r' radius of thee sphere = ";
	cin >> r;
	sphere = 4 / 3 * (pow(r ,3)* Pi);
	cout << "The Total volume of the sphere is = " << sphere << " m�" << endl;
}

//Calculating volume of the box
void displayBoxVolume(double box , double l ,double w ,double h)
{
	cout << "Enter the 'l' length of the box = ";
	cin >> l;

	cout << "Enter the 'w' width of the box = ";
	cin >> w;

	cout << "Enter the 'h' height of the box = ";
	cin >> h;
	box = l * w * h;
	cout << "The Total voulume of the Box is = " << box << " m�" << endl;
}

int main()
{
	double box = 0, sphere = 0, prism = 0, cylinder = 0;
	double l = 0,  b = 0, h = 0, w = 0, r = 0, H = 0 ,Aoft = 0;
	double Pi = 3.14;
	
	char permission_box , permission_sphere , permission_prism , permission_cylinder;
	cout << "Calculating the Volume of 3D objects \n\n";

	// permission for volume of the Box
	cout << "Enter 'Y' to calculate volume the box or 'N' to skip \n";
	cin >> permission_box;
	//Cross Check for thr permission of the box
	while (permission_box != 'Y' && permission_box != 'N' && permission_box != 'N' && permission_box != 'y' && permission_box != 'n')
	{
		cout << "Error ! Please enter valid input \n";
		cout << "Enter 'Y' to calculate  the box volume or 'N' to skip \n";
		cin >> permission_box;
	}

	//Calculating volume of the box
	if (permission_box == 'y' || permission_box == 'Y')
	{
		displayBoxVolume(box, l, w, h);
	}


	//Permission for volume of sphere
	cout << "Enter 'Y' to calculate  volume the sphere or 'N' to skip \n";
	cin >> permission_sphere;
	//Cross Check for thr permission of the sphere
	while (permission_sphere != 'Y' && permission_sphere != 'N' && permission_sphere != 'N' && permission_sphere != 'y' && permission_sphere != 'n')
	{
		cout << "Error ! Please enter valid input \n";
		cout << "Enter 'Y' to calculate  the sphere volume or 'N' to skip \n";
		cin >> permission_sphere;
	}

	//Calculating vloume of sphere
	if (permission_sphere == 'y' || permission_sphere == 'Y')
	{
		displaySphereVolume(sphere , r ,Pi);
	}


	//Permission for volume of prism
	cout << "Enter 'Y' to calculate  volume the prism  or 'N' to skip \n";
	cin >> permission_prism;
	//Cross Check for thr permission of the prism
	while (permission_prism != 'Y' && permission_prism != 'N' && permission_prism != 'N' && permission_prism != 'y' && permission_prism != 'n')
	{
		cout << "Error ! Please enter valid input \n";
		cout << "Enter 'Y' to calculate  the prism volume or 'N' to skip \n";
		cin >> permission_prism;
	}

	//Calculating vloume of prism
	if (permission_prism == 'y' || permission_prism == 'Y')
	{
		displayPrismVolume(prism, Aoft, b, h, H);
	}


	// Permission for volume of the Cylinder
	cout << "Enter 'Y' to calculate volume the Cylinder or 'N' to skip \n";
	cin >> permission_cylinder;
	//Cross Check for thr permission of the Cylinder
	while (permission_cylinder != 'Y' && permission_cylinder != 'N' && permission_cylinder != 'N' && permission_cylinder != 'y' && permission_cylinder != 'n')
	{
		cout << "Error ! Please enter valid input \n";
		cout << "Enter 'Y' to calculate  the box volume or 'N' to skip \n";
		cin >> permission_cylinder;
	}

	//Calculating vloume of Cylinder
	if (permission_cylinder == 'y' || permission_cylinder == 'Y')
	{
		displayCylinderVolume(cylinder, r, H, Pi);
	}
	return 0;
}