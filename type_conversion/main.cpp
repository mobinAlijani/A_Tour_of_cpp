#include <iostream>

/*
 * type conversion = conversion a value of one data type to another
 * 		Implicit = automatic
 * 		Explicit = precede value with new data type (int)
*/

int main(void){

	using std::cout ;
	int x = 3.24;
	
	cout << x <<'\n';     //termenal: 3 (int data type)
	
	double i =3.24;
	
	cout << i << '\n';		//termenal: 3.24 (double data type)
	cout <<(int)i <<'\n'; 	//termenal: 3 (integer data type)
		
	char a = 100;

	cout << a << std::endl;		//ascii table 100 is d
					//termenal: d
					
	cout << (char)100 <<'\n';	// termenal: d

	//Exmanple
	
	int correct = 8;
	int questions = 10;
	double score = correct/(double)questions * 100;

	cout << score << "% \n";	//termenal : 80%

	return 0;
}
