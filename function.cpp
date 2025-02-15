#include <iostream>

//function declaration
void happyBirthday(std::string name, int age); // we can now use the function that is after the main functon  

int main()
{
    // fumction = a block of reusable code.

    std::string name = "Albany";
    int age = 18;

    happyBirthday(name, age);               //invoke the fumction or call the function oe the () acts like a telephone that talk to each other
  

    return 0;
}
void happyBirthday(std::string name, int age){
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';            // this functoin is reusable can be called multiple times
    std::cout << "Happy birthday dear " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
}

//function arent awae of what gong on in other functions you can only
// make them aware of local val or var ny passing them as an argument
// but you'll need a matching set of parameters the name orunique identifyer doesn't neccessarily namd to have the same name  