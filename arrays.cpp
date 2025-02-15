#include <iostream>

int main()
{
    //array = a date structure that can hold multiple values
    //        values are accessed by an index number
    //        "kind of like a var that holds multiple values"
    //      NB: arrays cnan only accept values of the same datatype
    
    //std::string cars[] = {"Porsche", "Supra", "Mustang"};     //Array

    //incase you have no value to put in an array you can just declare the array.
    /*
    std::string cars[3];

    cars[0] = "Porsche";
    cars[1] = "Supra";
    cars[2] = "Mustang";


    std::cout <<  cars[0] << '\n';
    std::cout <<  cars[1] << '\n';
    std::cout <<  cars[2] << '\n';
    */

    double prices[4];

    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    //in short arrays is like a var that can hold multiple values

    return 0;
}