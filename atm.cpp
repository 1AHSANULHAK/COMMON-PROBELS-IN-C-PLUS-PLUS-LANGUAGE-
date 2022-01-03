#include<iostream>
using namespace std;
int withdraw(int);

int withdraw(int x){
	int n=5000;
	
	if(x<n)
	{ 
		return x;
}
cout<<"withdraw";
}

int main()
{ int m;
	cout<<"Enter amount as you want to withdraw from your account:"<<endl;
	cin>>m;
	cout<<"withdraw is successful " << withdraw(m)<<endl;
	return 0;
}

