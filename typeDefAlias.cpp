#include <iostream>

/* typedef => 
    1. is a reserved keyword used to create an additional name (alias) for another data type
    2. new identifier for an existing type
    3. Helps with readability and reduce typos 

    typedef has been replaced by the "using" keyword for bigger templates    

*/

// typedef std::string text_t;  

//  replace with "using" //
using text_t = std::string;

int main(){
    // let's use new type //
    text_t firstName = "Adnan";

    std::cout << firstName;

    return 0;
}