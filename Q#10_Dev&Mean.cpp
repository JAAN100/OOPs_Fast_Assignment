#include<iostream>
#include<cmath>
using namespace std;

//Displat=y mean and deviation
void display_Dev_Mean(const double dev ,const double mean)
{
	cout << "The mean of the given numbers is = " << mean << endl;
	cout << "The deviation of the given numbers is = " << dev << endl;

}

//Calculating deviation
void cal_dev(double* ptr, double& dev, const int N ,double mean)
{
	double variance = 0;
	for (int i = 0; i < N; i++)
	{
		dev += pow( (ptr[i] - mean) , 2 );
	}
	variance = dev / N;
	dev = sqrt(variance);
}

//Calculating mean
void cal_mean(double * ptr ,double & mean ,const int N )
{
	for (int i = 0; i < N; i++)
	{
		mean += ptr[i];
	}
	mean = mean / N;
}

int main()
{
	int N;
	cout << "How many numbers you want to enter \n";
	cin >> N;
	double* ptr = nullptr;
	ptr = new double[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter the " << i + 1 << " number = ";
		cin >> ptr[i];
	}
	double mean = 0 ,dev = 0;
	cal_mean(ptr, mean ,N);
	cal_dev(ptr, dev, N ,mean);
	display_Dev_Mean(dev, mean);
	delete [] ptr;
}