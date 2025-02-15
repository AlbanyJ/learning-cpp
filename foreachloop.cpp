#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an 
    //                iterable data set.eg an array.

    std::string students[] = {"kofi", "ama", "akos", "james", "reece"};
    int grades[] = {65, 71, 82, 98};

    /*
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        std ::cout << students[i] << '\n';
    }
    */

    //for each loop now yuo can add more students amd the code is simple now
    //for an array for each loop is better.
    for(std::string student : students){
        std ::cout << student << '\n';
    }
    
    for(int grade : grades){
         std ::cout << grade << '\n';
    }

    return 0;
}