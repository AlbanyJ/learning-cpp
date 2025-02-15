#include <iostream>

int main()
{
    // do while loop = do some block of code first,
    //                 THEN repeat again if condition is true.

    /*
    // not a good ettigue of code because of reptition so we'll try the next block of code.
    int number;

        std::cout << "Enter a positive number: ";
        std::cin >> number;

    while(number < 0){
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }    

    std::cout << "The # is: " << number; 
    */
    // we'll use a do while loop
    // can be usedin games like starting a game again.
    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is: " << number;

    return 0;
}