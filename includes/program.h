#pragma once

#ifndef program_H
#define program_H

#include <string>

class Program{
private:
    bool isProgramRunning = true;
public:
    std::string bootScreen();
    bool getProgramStatus();
    std::string getPrompt();
    void processPrompts(std::string prompts);
    void closeProgram();
};

#endif