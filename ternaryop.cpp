#include <iostream>

int main() 
{

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    //int grade = 75;
    //grade >= 60 ? std::cout << "You passed!" : std::cout << "You fail!";

    //int number = 8;
    //number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are angry" : "You are full");


    return 0;
}