#include <iostream>  
using namespace std;

class paralelogram{
	private:
		double length;
		double width;
		
	public:
		paralelogram():length(0),width(0){}
		paralelogram(int l, int w): length (l), width (w){}
		
		int calculateArea(){
			return length * width;
			
		}	
		void display(){
			cout<<"length:"<<length<<endl;
			cout<<"width:"<<width<<endl;
			cout<<"Area:"<<calculateArea()<<endl;
		}
};
int main(){
	paralelogram  paralelogram1;
	paralelogram  paralelogram2(2.75 , 0.5);
	
	cout<<"paralelogram1:"<<endl;
	paralelogram1.dispaly();
	cout << endl;
	
	cout<<"paralelogram2:"endl;
	paralelogram2.dispaly()
	cout << endl;
	
	return 0;
	
}