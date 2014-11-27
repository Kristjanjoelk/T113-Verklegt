#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include <iostream>
#include "personaservice.h"
class ConsoleUI
{
public:
    ConsoleUI();
    void start();
private:
    PersonaService PersonaServ;
};

#endif // CONSOLEUI_H
