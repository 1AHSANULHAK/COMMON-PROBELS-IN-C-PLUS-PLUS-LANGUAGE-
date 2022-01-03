#include <iostream>  
using namespace std;  
void change(int x);  
int main()  
{  
int x = 3;  
change(x);  
cout << "Value of the x is: " << x
<< endl;  
return 0;  
}  
void change(int x)  
{  
x = 5;  
}  
