//A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.
#include<iostream>
using namespace std;

int main()
{ int n;
    cout<<"Enter your age to check you are eligible or not"<<endl;
cin>>n;
if(n>=18)
{

cout<<"you are eligible for the vote :"<<endl;
}
else
{
	cout<<"you are not eligible for the vote :" << endl;
}
return 0;
}


