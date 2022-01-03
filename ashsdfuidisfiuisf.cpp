//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
#include<iostream>
using namespace std;
int greatwer(int,int,int);
int main()
{ int n1,n2,n3;
    cout<<"Enter three digit number :"<< endl;
    cin>>n1>>n2>>n3;
    cout<<"largest number is :" <<(n1,n2,n3)<<endl;
return 0;
}
int greater(int x,int y,int z)
{
    if(x>y&&x>z)
    {
        return x;

        if(y>x&&y>z)

        {
            return y;

        }
        else
        {
            return z;
        }
    }


}