#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "bro is shit";
    double gpa = 2.5;
    char grade = 'F';
    bool student = false;
    char grades[] = {'A','B','C', 'D','E', 'F'};
    std::string students[] = {"kofi", "ama","kojo", "aminu"};

    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";


    return 0;
}