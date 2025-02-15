#include <iostream>

int main()
{
    // Dynamic memroy = memory that is allocated after the program
    //                  is already compiled & running.
    //                  use the 'new' keyword ie operator to allocate
    //                  memory in the heap rather than the stack.
    
    //                  useful when we don't know how much memory 
    //                  we will need. makes our program more flexible,
    //                  esspecially when accepting user input.

    /*
    int *pNum = NULL;

    pNum = new int;

    *pNum = 12;
    
    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;
    */

    char *pGrades  = NULL;
    int size;
    
    std::cout << "How many grades to enter in ?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}