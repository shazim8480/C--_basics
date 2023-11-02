#include <iostream>

// cout << insertion operator //
// cin >> extraction operator //

// std::getline(std::cin, your_variable) // for multiple inputs

int main(){

   std::string personOneName;
   std::string personTwoName;

   std::cout << "What is your name?" << "\n";
//    std::cin >> personOneName; // single input, doesn't include spaces
   
   // multiline input, includes spaces
   std::getline(std::cin, personOneName); 
   
   std::cout << "Hello " << personOneName << "\n"; 
   std::cout << "What's your name?" << "\n";
   std::cin >> personTwoName;
   std::cout << "Hello " << personTwoName << "\n"; 

   return 0; 
}