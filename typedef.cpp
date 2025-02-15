#include <iostream>
#include <vector>

//typedef  std::vector<std::pair<std::string, int>> pairList;
//typedef std::string text_t;
//typedef int number_t;
// instead of typedef you can use the using keyword
using text_t = std::string;
using number_t = int;


int main() {

    //typedef = reserved keyword used to create an additional name 
    //          (alias) for another data type.
    //          new identifier for an existing data type
    //          helps with readability and reduces typos


    text_t firstName = "Bro";
    number_t age = 21;


    std::cout << firstName << '\n';
    std::cout << age << '\n';


    return 0;
}