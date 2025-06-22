#include <iostream>
#include <vector>

/*
 typedef  = reseved keyword used to create an additional name 
            (alias) for another data type.
            New idontifier for an existing type
            Helps with readability and reduces typos
*/


//typedef std::vector<std::pair<std::string,int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;

/*
 typedef =  Use when there a clear benefit 
            Replaced with 'using'(work better w/ templates)
*/

using text_t = std::string;
using number_t = int;

int main(void){

//    pairlist_t pairlist;
    text_t firstName = "mobin";
    number_t age = 32;

    std::cout << firstName <<" \n";
    std::cout << age <<" \n";

    return 0;

}

