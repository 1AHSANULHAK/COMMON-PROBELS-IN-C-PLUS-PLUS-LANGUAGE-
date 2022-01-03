#include<iostream>
using namespace std;
int main()
{
 table(10,15);
	return 0;
}
void table(int x,int y)
{
	if(y!=1)
	{
		table(x,y-1)
	}
	cout<<"x*y"<<endl;
	
}
