#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main()
{
    //int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    std::string foods[] = {"rice", "sushi", "water", "noodles"};
    //int size = sizeof(nums)/sizeof(nums[0]);
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to serch for: " << '\n';
    std::getline (std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " is at index " << index;
    }
    else{
        std::cout << myFood << " is not in the array";
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; //serves as centinal val ie smn wasn't found.
}