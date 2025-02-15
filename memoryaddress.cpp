#include <iostream>

int main()
{
    // memory address = a location in memory where a data is stored
    // a memory address can be accessed with & (address-of operator)

    //suppose
    
    std::string name = "Albany";
    int age = 12;
    bool student = true;

    std::cout << &name << '\n';   //ouput is a hex address changes ater running the code
    std::cout << &age << '\n';
    std::cout << &student << '\n';   //can be converted to decimal (tools available online)...  



    return 0; 
}