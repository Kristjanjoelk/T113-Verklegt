#include "consoleui.h"

using namespace std;
ConsoleUI::ConsoleUI(){

    PersonaServ = PersonaService();

}

void ConsoleUI::start(){

    int selection;
    char yes = 'Y';

    do{

    cout << "Dis r de commands: \n";
    cout << "1: add \n";
    cout << "2: add \n";
    cout << "3: add \n";
    cout << "4: add \n";

    cin >> selection;
    if(selection == 1){
        Persona p = Persona();
        PersonaServ.add(p);
    }
    cout << "Do you with to continue?";
    cin >> yes;
    }while(yes == 'Y' || yes == 'y');

}
