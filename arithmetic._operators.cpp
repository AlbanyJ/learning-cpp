#include <iostream>

int main() {

    //arithmetic operators = return the results of a specific
    //                       arithmetic operation (+ - * /)

    int students = 20;

    //students = students + 1;
    //students+=1;
    //students++;

    //students = students - 1;
    //students-= 1;
    //students--;

    //students = students * 2;
    //students*=2;

    //students = students / 2;
    //students/=3;

    int remainder = students % 3;  //modulus operator = returns the remainder of an integer division

    std::cout << remainder;


    return 0;
}