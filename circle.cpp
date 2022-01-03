//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function
#include<iostream>
using namespace std;
float circle(float);
float circumeference(float);
int main()
{float d;
    cout<<"Enter the value of radius :"<< endl;
    cin>>d;
    int x;
    cout<<"select the operation :"<<endl;
    cin>>x;
    if(x==1)
    {
	
    cout<<"area of circle is :"<< circle(d)<<endl;
}
else{

    cout<<"circumeference of circle is :"<< circle(d)<<endl;
}
    

return 0;
}
float circle(float r)
{
    return 3.14*r*r;
}
float circumeference(float r)
{ 
    return 3.14*r*r;
}
