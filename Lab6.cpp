#include <iostream>
using namespace std;
double calc_y(double x);
void main()
{
	double x, y;
	cout << "X=";
	cin >> x;
	if(fabs(x - 20) < 0.0001)
	{
		cout << "Error! divide by zero";
		return;
	}
	y = calc_y(x);
	cout << "y = " << y;
}

double calc_y(double x)
{
	return (x + 10) / (x - 20);
}