#include <iostream>

std::string concatStrings(std::string string1, std::string string2);


int main()
{
   std::string firstName = "Albany";
   std::string lastName = "Sufyan";
   std::string fullName = concatStrings(firstName, lastName);

   std::cout << "Hello " << fullName;


    return 0;
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}