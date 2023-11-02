#include <iostream> 
using namespace std; 

int main() {
    // integer
    int number = 10;

    // double (with decimals)
    double price = 30.38;


    // single character
    char grade = 'A';
    char dollarSign = '$';

    // boolean
    bool student = false;
    bool lightSwitch = true;

    // string (technically an object that represents a sequence of text)
    // we can store more than one character here //
    std::string name = "Sami";
    std::string finalResult = "Passed!";

    // normal print
    // std::cout << name;

    // print along with a string //
    // std::cout << "Final Result is " << finalResult;

    // print in new line //
    // std::cout << "My name is " << name << "\n";
    // std::cout << "I have " << finalResult;

    // ****** make READ ONLY Variable with const //
    const double PI = 3.1416;
    double radius = 10;

    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    return 0;
}