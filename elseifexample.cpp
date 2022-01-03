#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter your number ";
	cin>>num;
	if(num!=0)
	{
		if(num%2==0)
		{
			cout<<"number is even";
		}
		else
		{
			cout<<"number is odd";
			
		}
		
	}
	else
	{
		cout<<"neither odd neither even";
	}
	
}
