//Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.
#include<iostream>
using namespace std;
int main()
{int a[10],n,i;
	cout<<"Enter a array "<<endl;
	for(int i=1;i<10;i++)
	{
		cin>>a[i];
	}
for(i=0;i<10;i++){

      cout<<a[i]<<endl;
  
			}
			

	if(n==a[i])
	{
		cout<<"element is having "<<endl;
	}
	else
	{
		cout<<"not having "<<endl;
	}
	return 0;
}
