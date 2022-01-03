//Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
	#include<iostream>
	using namespace std;
	int main()
	{
		int n;
		cout<"Enter the marks of the student :"<<endl;
		cin>>n;
		float p=(n/500)*100;
		switch(p)
		{
			case 1:
				if(p>90&&p<=100)
				{
					cout<<"topper student :"<<p<<endl;
					
				}
				break;
				case 2:
				else-if(p>80&&p<=90)
				{
					cout<<"second topper:"<<endl;
				}
				break;
				case 3:
				else-if(p>70&&p<=80)
				{
					cout<<"third topper:"<<endl;
				}
				break;
				default :
					else()
					{
						cout<<"No result found:"<<endl;
					}
					break;
		}
	}
