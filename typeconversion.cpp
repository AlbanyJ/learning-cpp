#include <iostream>

int main() {

    //type conversion = converting an expression from one data type to another
    //                  implicit = automatically done by the compiler
    //                  explicit = precede value with new data type (int)
    //         example

    //double x = (int) 3.14;
    //char x = 100;

    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100; //explicit type conversion


    std::cout << score << "%";

    return 0;
}