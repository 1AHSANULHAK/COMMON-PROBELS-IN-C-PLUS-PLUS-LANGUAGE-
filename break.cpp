#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
		if(i==4&&j==6)
		{
			break;
		}
		if(i==5&&j==6)
		{
			continue;
		}
		
		cout<<i<<j<<"\n";
		
		}
	}
}
