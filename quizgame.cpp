#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?:"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido van Rossum", "B. Bjarne Stroutrup", "C. John Carmack", "D. Mark Zuckerberg"},
                               {"A. C", "B. C+", "C. C--", "D. B++"},
                               {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;  //fix the error here ....

    for(int i = 0; i < size; i++){
        std::cout << "********************\n";
        std::cout << questions[i] << '\n';
        std::cout << "********************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout << "********************\n";
    std::cout << "*      RESULTS     *" << '\n';
    std::cout << "********************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# of QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0; 
}