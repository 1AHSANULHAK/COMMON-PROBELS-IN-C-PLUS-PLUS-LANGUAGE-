#include<iostream>
using namespace std;
int sum(int,int);
int sub(int,int);
int product(int,int);
int div(int,int);
int main()
{int n1,n2;
cout<<"Enter first number:"<<endl;
cin>>n1;
cout<<"Enter second number:"<<endl;
cin>>n2;
int d;
cout<<"what do youy want to do here :"<< endl;
cin>>d;

switch(d)
{
case 1:
	cout<<"sum of two number is :"<<sum(n1,n2)<<endl;
break;
case 2:
cout<<"substration of two number is :"<<sub(n1,n2)<<endl;
break;
case 3:
cout<<"product of two number is :"<<product(n1,n2)<<endl;
break;
case 4:
cout<<"division of two number is :"<<div(n1,n2)<<endl;
break;

	default:
		cout<<"No operation found "<<endl;
		break;
}
return 0;
}
int sum(int x,int y)
{
	return x+y;
}
 int sub(int m,int n)
{
    
    return m-n;

}
int product(int a,int b)
{
return a*b;	
}
int div(int s,int t)
{
	return s/t;
}

