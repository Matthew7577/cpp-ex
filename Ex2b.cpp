#include <iostream>
    int main(){
        int coursework;
        int examination;
        float overall;
        std::cout << "Enter coursework marks: ";
        std::cin >> coursework;
        std::cout << "Enter examination marks: ";
        std::cin >> examination;
        overall = coursework * 0.4 + examination * 0.6;
        if (coursework >= 50 && examination >= 50){
            std::cout << "Your overall result is: " << overall << " (Pass)";
        }
        else{
            std::cout << "Your overall result is: " << overall << " (Fail)";
        }
    }