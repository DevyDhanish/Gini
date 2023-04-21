#include <iostream>
#include "../includes/program.h"

int main(){
    Program program;

    std::cout << program.bootScreen();
    while(program.getProgramStatus()){
        std::string userPrompts = program.getPrompt();
        program.processPrompts(userPrompts);
    }
    
    return 0;
}