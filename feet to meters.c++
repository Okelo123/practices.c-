#include <iostream>

int   main(){
	double feet,meters;
	
	std::cout<<"Enter length in feet:";
	std::cin>>feet;
// conversion      factor :1  feet=0.3048    meters//	
	meters = feet * 0.3048;
		
	std::cout<<feet<<"feet is equal to"<<meters<<"meters."<<std::endl;
	
	return  0;
}