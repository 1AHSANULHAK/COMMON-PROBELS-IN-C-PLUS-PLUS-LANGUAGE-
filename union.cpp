 #include<iostream>
 using namespace std;
 union stu{
 	int rollno;
 	char name[20];
 	char branch[10];
 	
 };
 int main()
 {
 	union stu s;
 	s.rollno=306;
 	s.name[20]='Ahsanulhak';
 	s.branch[10]='B.Tech';
 	cout<<"The roll no of student is :"<<s.rollno<<endl;
 	cout<<"The name of student is :"<<s.name[20]<<endl;
 		cout<<"The branch of student is :"<<s.branch[10]<<endl;	
 		return 0;
 }
