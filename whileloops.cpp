#include <iostream>

int main()
{
    std::string name;

    /* while(name.empty()){
        std::cout << "Enter your name:";
        std::getline(std::cin , name);
    }

    std::cout << "Hello " << name;
    */

    // an infinite loop
    while(1 == 1){
        std::cout << "HELP! I'M STUCK IN AN INFINITE LOOP!";
    }

    std::cout << "Hello " << name;

    return 0;
}