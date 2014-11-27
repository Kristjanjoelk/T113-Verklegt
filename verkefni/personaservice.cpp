#include "personaservice.h"

using namespace std;

PersonaService::PersonaService()
{
    PersonaRepo = PersonaRepository();
}
void PersonaService::add(Persona p){

    cout << "Name: ";
    cin >> p.name;
    cout << "Gender: ";
    cin >> p.gender;
    cout << "Year of birth: ";
    cin >> p.birth;
    cout << "Year of death (default 0): ";
    cin >> p.death;

}
