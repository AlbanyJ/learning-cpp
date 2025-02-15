#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "*********** TEMPERATURE CONVERTER ***********\n";
    std::cout << "F = fehrenheit\n";
    std::cout << "C = celsius\n";
    std::cout << "What would you like to convert to:";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "f\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fehrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter in only F or C\n";
    }


    std::cout << "*********************************************\n";

    return 0;
}