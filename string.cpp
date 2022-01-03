#include <iostream>
using namespace std;
int main()
{
	int y = 3;
	int x = 4;
	int n=x+y;
	int *p;
	p = &x;
	int &a = x; //reference variable
	cout << "the value of x is" << x << endl;

	cout << "the value of x is" << *p << endl;
	cout << "the value of x is" << *(&x) << endl;

	cout << "the value of x is" << a << endl;

	cout << "the address of x is" << &x << endl;
	cout << "the addess of x is" << p << endl;
	cout << "add x+y =" << n << endl;
	cout << "address of sum x+y =" << &n << endl;
	cout << "value of  sum x+y =" << *(&n) << endl;

	return 0;
}