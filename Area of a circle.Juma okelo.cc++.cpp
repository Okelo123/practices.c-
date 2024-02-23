#include<iostream>
#include<cmath>
using namespace std;
double calculateCircleArea(double radius)
{
	return   M_PI * pow(radius,2);
}

int main(){
	double   radius;
cout<<"Enter the radius of the circle:"<<endl;
cin>>radius;

double area=calculateCircleArea(radius);
cout<<"The radius area of the circle with radius"<<"is:"<<area<<endl;

return 0;

}