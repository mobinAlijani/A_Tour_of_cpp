#include <iostream>

// namespace = provides a solution for preveting name conflicts

namespace setting{

    int Motor1= 23;
}



int main(void){

    using namespace setting;
    //using namespace std;
    using std::cout;


    cout << "this is motor main : " << Motor1 << " this is motor in namespace : " << Motor1 << std::endl;


    cout << "this is motor in setting : " << Motor1 <<"\n";

    return 0;

}