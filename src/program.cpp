#include <iostream>
#include "../includes/program.h"
#include "../includes/art.h"
#include "../includes/utils.h"
#include "../includes/color.h"

std::string Program::bootScreen(){
    return red+gini_art+reset_color;
}

bool Program::getProgramStatus(){
    return Program::isProgramRunning;
}

std::string Program::getPrompt(){
    std::cout << green << "> " << reset_color;
    std::string u_p;
    std::cin >> u_p;
    return u_p;
}

void Program::closeProgram(){
    Program::isProgramRunning = false;
}

void Program::processPrompts(std::string prompts){
    if(prompts == "close") Program::closeProgram();
}