#include <iostream>

int main() 
{
    //switch statement = selects one of many code blocks 
    //                   to be executed
    //                 = an alterantive to using many "else if "staements
    //                   compare one value against matching cases
    //                   and executes the corresponding block of code

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "It's January";
            break; //exit the switch statement
        case 2:
            std::cout << "It's February";
            break;
        case 3:
            std::cout << "It's March";
            break;
        case 4:
            std::cout << "It's April";
            break;
        case 5:
            std::cout << "It's May";
            break;
        case 6:
            std::cout << "It's June";
            break;
        case 7:
            std::cout << "It's July";
            break;
        case 8:
            std::cout << "It's August";
            break;
        case 9:
            std::cout << "It's September";
            break;
        case 10:
            std::cout << "It's October";
            break;
        case 11:
            std::cout << "It's November";
            break;
        case 12:
            std::cout << "It's December";
            break;
        default:
            std::cout << "Please enter in only numbers (1-12)";
    }    



    return 0;
}