#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a;
	float b; 
	char x; 
	float y; 
	double c; 
	do {
		cout << "First: "; cin >> a;
		cout << "Second: "; cin >> b;
		cout << "Operation "; cin >> x;
		if (x == '*')
		{
			y = a * b;
		}
		if (x == '/')
		{
			y = a / b;
		}
		if (x == '+')
		{
			y = a + b;
		}
		if (x == '-')
		{
			y = a - b;
		}
		cout << "Result: " << y << endl;
		cout << "c = "; cin >> c;
	} while (c==1);
	cout << endl;
	cin.get();
	return 0;
}
