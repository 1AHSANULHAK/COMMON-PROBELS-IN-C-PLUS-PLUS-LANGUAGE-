#include<iostream>
using namespace std;
int main(){
	int i=2;
	int n;
	cout<<"Enter the number to check number is prime or not :";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
	{
		cout<"number is prine ";
	}
	else{
		cout<<"number is not  prime ";
	}
	return 0;	
	}
	
}
