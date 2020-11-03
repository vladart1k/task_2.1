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
		cout << "Want to continue?(Yes/No)"; cin >> c;
	} while (c=="Yes");
	cout << endl;
	cin.get();
	return 0;
}
