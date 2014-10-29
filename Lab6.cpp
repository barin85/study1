#include <iostream>
using namespace std;
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
	y = (x + 10) / (x - 20);
	cout << "y = " << y;
}