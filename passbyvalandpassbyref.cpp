#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x <<'\n';
    std::cout << "Y: " << y <<'\n';

    return 0; 
}


//when we pass values we created copies of x and y
// using the memory operator ie passing by reference makes us pass the address of the memory wherethe original x and y var a located
// alwas use pass by reference ...
void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
    /*
    std::cout << "X: " << &x <<'\n';
    std::cout << "Y: " << &y <<'\n';
    */
}