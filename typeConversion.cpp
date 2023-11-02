#include <iostream>

int main(){

// example -1 

// double decimal_PI = (int) 3.1416;
// std::cout << decimal_PI;

// example - 2

// char x = 100;
// std::cout << (int) x;

int totalQues = 10;
int corrected = 7;

int result = ((double)corrected / (double)totalQues) * 100; 
// (corrected / totalQues) = 7 / 10 = 0.7; int took just 0; 0 * 100 = 0;

std::cout << result << "%";

return 0;
}