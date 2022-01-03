#include<iostream>
using namespace std;
int sum(int,int);
int main()
{int n1,n2;
cout<<"Enter first number:"<<endl;
cin>>n1;
cout<<"Enter second number:"<<endl;
cin>>n2;
cout<<"sum of two number is :"<<sum(n1,n2)<<endl;

return 0;
}
 int sum(int x,int y)
{
    int c=x+y;
    return c;

}