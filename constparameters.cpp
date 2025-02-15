#include <iostream>

void printInfo(const std::string &name, const int &age);

int main()
{
    // const parameters = parameter that is effectively read-only
    //                    code is more secure & conveys instent 
    //                    useful for reference and pointers...

    std::string name = "Albany";
    int age = 12;

    printInfo(name, age);


    return 0;
}


//using const
void printInfo(const std::string &name, const int &age){

    name = " ";
    age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}

// error due to the const making it a read only 
// cant chane the address of pointer.