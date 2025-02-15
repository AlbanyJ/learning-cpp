#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    // return = return a value back to the spot
    //          where you called the encompassing function

   double length = 7.0;
   double area = square(length);
   double volume = cube(length);

   std::cout << "Area: " << area << "cm^2\n";
   std::cout << "Volume: " << volume << "cm^3\n";



    return 0;
}
// function definition
// you have to change the void to double to match the datatype of what we are returning and also in the function decalration as well
// or you can simply return length * lenghth thats reccomended and vlid
double square(double length){
    //double result = length * length; the simply form this is not needed 
    return length * length;
}
double cube(double length){
    return length * length * length;
}