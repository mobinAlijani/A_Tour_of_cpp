#include <iostream>

//	cout << (insertion operator)
//	cin >> (extraction operator)


int main(void){

	using namespace std;

	string name;
	int age;

	cout << "What's your age?: ";
	cin >> age;

	cout << "What's your full name?: ";
	getline(cin >>ws,name); 

	cout << "\nHello " << name << "\n";
	cout << "You are " << age << " years old \n";

	return 0;

}
