#ifndef PERSONAREPOSITORY_H
#define PERSONAREPOSITORY_H


#include <vector>
#include "persona.h"

using namespace std;

class PersonaRepository
{
public:
    PersonaRepository();
    void add(Persona p);
private:
    vector<Persona> PersonaVector;
};

#endif // PERSONAREPOSITORY_H
