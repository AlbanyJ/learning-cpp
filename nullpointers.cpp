#include <iostream>

int main()
{
    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)
    
    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer.

    //when using a pointers, be careful that your code isn't
    //dereferencing nullptr or pointer to free memory
    // this will cause undefined behaviour...


    // if you dereference a nullptr or a pointer that's not assigned a value then it will lead to undefined behaviour.


    int *pointer = nullptr;
    int x = 123;

    pointer = &x;   //assignment pf address

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
        std::cout << *pointer;
    }
    else{
        std::cout << "address was  assigned!\n";
        std::cout << *pointer;
    }



    return 0;
}