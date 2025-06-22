#include <iostream>
#include <cmath>


// for more : www.cplusplus.com/reference/cmath/ 

int main(){

	double x = 3;
	double y = 4;
	double z;

	z = std::max(x,y);	//termenal: max value is 4 or x
	z = std::min(x,y);	//termenal: min value is 3 or y
	z = pow(2,3);		//termenal: 2 power 3 == 8	
	z = sqrt(9);		//termenal: sqrt 9 == 3 
	z = abs(-3);		//termenal: abs -3 == 3
	z = round(3.23);	//termenal: 3.23 round 3
	z = ceil(3.23);		//termenal: 3.23 round up 4
	z = floor(3.99);	//termenal: 3.99 round down 3		
	

	std::cout << z << '\n';
	
	return 0;

}
