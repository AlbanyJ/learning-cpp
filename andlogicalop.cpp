#include <iostream>

int main() 
{
    // && = check if two conditions are true
    // || = check if at least one of the two conditions is true
    // !  = reverses the logical state of its operand

    int temp;
    bool sunny =  true;

    std::cout << "Enter the temperature: "; 
    std::cin >> temp;

   /*f(temp > 0 && temp < 30){
        std::cout << "the temperatue is good!";
    }
    else{
        std::cout << "temperatue is bad!";
    }*/
    if(temp <= 0 || temp >= 30){
        std::cout << "the temperatue is good!\n";
    }
    else{
        std::cout << "temperatue is bad!\n";
    }

    if(sunny){
        std::cout<< "it is sunny outside";
    }
    else{
        std::cout << "it is cloudy outside";
    }
    return 0;
}