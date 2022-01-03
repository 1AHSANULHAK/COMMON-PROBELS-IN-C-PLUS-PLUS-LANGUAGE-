//Define a function to find out if number is prime or not.
#include<iostream>
using namespace std;
int main()
{int i=2;
int n;
cout<<"Enter number to check whether number is prime or not "<<endl;
cin>>n;
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
        if(n==1)
        {
            cout<<"number is prime"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }
    }

}

return 0;
}