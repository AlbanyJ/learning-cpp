#include <iostream>

int myNum = 3;    // global var (avoid it it pollutes the global namespace )

void printNum();

int main()
{
    // local variables = declared inside a function or block {}
    // global variables = declared outside of all functions

    int myNum = 1;

    printNum();
    std::cout << ::myNum << '\n';

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n';
}

//function cant see inside of other functions
// functions uses local var first before resulting to any global var 
// ::precedethevar = scope resolution operator
// ::myNum = using the global version of myNum