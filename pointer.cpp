#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int *b;
	b=&a;
	cout<<"the value of a is :"<<a<<endl;
	cout<<"address of a is :"<<&a<<endl;
	cout<<"address of a is :"<<b<<endl;
return 0;
}