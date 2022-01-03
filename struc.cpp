#include<iostream>
using namespace std;
struct employee
{
	int eId;
	char name[20];
	float salary;
	
};
int main()
{
	struct employee ahsan;
	ahsan.eId=306;
	ahsan.name='Ahsanulhak';
	ahsan.salary=1000000;
	cout<<"the value is :"<<ahsan.eId<<endl;
		cout<<"the value is :"<<ahsan.name<<endl;
			cout<<"the value is :"<<ahsan.salary<<endl;
			return 0;
}
