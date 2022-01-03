#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
        return false;
    }
    else

        return true;
    }
}
int main()
{
isprime(3)?cout<<"true\n":cout<<"false\n";
isprime(15)?cout<<"true\n":cout<<"false\n"; 
return 0;
}