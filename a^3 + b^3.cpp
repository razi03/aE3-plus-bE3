#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int x;
	int y;
	cout << "Enter value for a: \n";
	cin >> a;
	cout << "enter value for b:  \n";
	cin >> b;
	x = ((a*a*a) + (b*b*b));
	y = (a + b)*((a*a) - (a * b) + (b*b));
	if (x==y)
	{
		cout << "correct! \n";

	}
	else
	{
		cout << "Wrong!  \n";
	}

}