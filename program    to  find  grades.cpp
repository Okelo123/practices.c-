#include<iostream>
using namespace std;

int marks;

int main()
{
	cout<<"----Program To Find  Grades-----"<<endl;
	cout<<"----Enter Marks-----"<<endl;
	cin>>marks;
	
	if(marks>=90&&marks<=100)cout<<"Your grade is A";
	else if(marks>=80&&marks<90)cout<<"Your grade is A";
	else if(marks>=70&&marks<80)cout<<"Your grade is B";
    else if(marks>=60&&marks<70)cout<<"Your grade is C";
   	else if(marks>=50&&marks<60)cout<<"Your grade is D";
   	else if(marks>=0&&marks<50)cout<<"Your grade is E";
   
   	else  cout<<"Invalid marks";
   	
   	return 0;
			
}