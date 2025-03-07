#include <iostream>

void sort(int array[], int size);


//bubble sort algo
int main()
{
    int array[] = {9, 1, 3, 4, 2, 7, 6, 8 ,5, 10};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    //using for each to iterate
    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - 1; j++){
              if(array[j] < array[j + 1]){  //ascending is > and descending is <
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

              }  
            }
    }
}