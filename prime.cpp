#include<iostream>
using namespace std;
bool prime(int);
int main()
{
cout<< prime(5) <<endl;
cout<< prime(7) <<endl;

return 0;
}
bool prime(int n)
{if(n>=1)
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        
        return true;
    }
}
