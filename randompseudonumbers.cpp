#include <iostream>
#include <ctime>

int main() {
   
    // pseudo-random = not truly random but close.


    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    //std::cout << num1 << '\n' << num2 << '\n' << num3;
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    


   return 0;
}