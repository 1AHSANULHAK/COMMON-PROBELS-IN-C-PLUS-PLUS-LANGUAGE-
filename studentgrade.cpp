//Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
//Marks        Grade
/*91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter marks of the student :"<<endl;
	cin>>n;
	if(n>90&&n<=100)
	{
		cout<<"grade AA"<<endl;
		
	}
	else if(n>80&&n<=90)
	{
		cout<<"grade AB"<<endl;
		
	}
	else if(n>70&&n<=80)
	{
		cout<<"grade BB"<<endl;
		
	}
	else if(n>60&&n<=70)
	{
		cout<<"grade BC"<<endl;
		
	}
	else if(n>50&&n<=60)
	{
		cout<<"grade CD"<<endl;
		
	}
	else if(n>40&&n<=50)
	{
		cout<<"grade DD"<<endl;
		
	}
	else if(n>30&&n<=40)
	{
		cout<<"grade CE"<<endl;
		
	}
	else{
		cout<<"Sorry! you are fail"<<endl;
		
	}
}
