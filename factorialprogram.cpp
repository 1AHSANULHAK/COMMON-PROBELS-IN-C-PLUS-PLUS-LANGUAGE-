//Write a program to print the factorial of a number by defining a function named 'Factorial'.
/*Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0*/
#include<iostream>
using namespace std;
int factorial(int);
int main()
{int x ;
	cout<<"Enter the number which you want foctorial of the number"<<endl;
	cin>>x;
	cout<<"factorial of the number is "<<factorial(x)<<endl;
	
  return 0;
	
}
int factorial(int n)
{
int f=1;

for(int i=1;i<=n;i++)
{
	f=f*i;
	
}
		return (f);
}
