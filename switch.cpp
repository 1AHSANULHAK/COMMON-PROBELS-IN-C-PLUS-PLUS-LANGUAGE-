#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number :";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<< "A grade";
			break;
			case 2:
				cout<<"B grade";
				break;
				case 3:
					cout<<"C grade ";
					break;
					default:
						cout<<"no grade ";
						break;
	}
}
