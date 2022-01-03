//Define a function to find out if number is prime or not.
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number to check whether number is prime or not "<<endl;
cin>>n;

	


for(int i=2;i<n/2;i++)
{
    if(n%i==0)
    
       {
            cout<<"number is not prime:"<<endl;
        }
        else
        
		{
            cout<<" prime:"<<endl;
        }
    

}

return 0;
}
