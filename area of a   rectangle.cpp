#include<iostream>
using namespace std;

class Rectangle{
	private:
		int Length;
		int Width;
		
	public:	
		Rectangle(){
			Length = 10;
			Width = 20;
		}
		
		int Area(){
			return Length * Width;
		}
};

int main(){
	Rectangle R;
	cout<<"The area of a Rectangle:"<<R.Area()<<endl;
	return  0;
}