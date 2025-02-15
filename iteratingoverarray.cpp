#include <iostream>

int main()
{
    std:: string students[] = {"kofi", "ama", "john", "lawson"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    /*
    std::cout << students[0] << '\n';
    std::cout << students[1] << '\n';
    std::cout << students[2] << '\n';
    */
    //a better approach isusing for loop.

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }
    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }

    //iterating an array using for loop


    return 0;
}