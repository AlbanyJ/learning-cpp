#include <iostream>

int main()
{
    //pointers = variable that stores a memory address of another variable
    //           sometimes it's easier to work with an address
    
    // & address-of operator
    // * dreference operator

    std::string name = "Albany";
    int age = 12;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};


    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizza = freePizza;
    

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizza << '\n';



    return 0;
}