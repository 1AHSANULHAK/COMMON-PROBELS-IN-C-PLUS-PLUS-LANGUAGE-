#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number to check the grade";
	cin>>n;
	if(n<0 || n>100)
	{
		cout<<"Wrong number you have enter ";
		
	}
	else if(n>=0&&n<50)
	{
	cout<<"Fail";	
	}
	else if(n>=50&&n<60 )
	{
		cout<<"Grade D";
	}
	else if(n>=60&&n<70)
	{
		cout<<"Grade C";
		
	}
	else if(n>=70&&n<80)
	{
		cout<<"Grade B";
	}
	else if(n>=80&&n<90)
	{
		cout<<"Grade A ";
	}
	else if(n>=90&&n<=100)
	{
		cout<<"outstanding";
	}
	
	else
	{
		cout<<"notothing";
	}
}
