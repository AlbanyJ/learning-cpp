#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 <<" and " << topping2 << " pizza!\n";
}
//functions can share the name 
//youll need different set of parmeters
//a function plus its parameters is known as a function signature each functon signature has to be unique
// this is overloaded functions