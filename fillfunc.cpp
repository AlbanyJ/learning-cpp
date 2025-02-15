#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    //          fills (begin, end, value)

    //std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    //using fill to do the same thing...
    const int size = 99;
    std::string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods +(size/3), foods + (size/3)*2, "sushi");
    fill(foods + (size/3)*2, foods + size, "Hotdog");

    for(std::string food : foods){
        std::cout << food << '\n';
    }



    return 0;
}