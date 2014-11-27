#ifndef PERSONASERVICE_H
#define PERSONASERVICE_H
#include <iostream>
#include "Persona.h"
#include "personarepository.h"

class PersonaService
{
public:
    PersonaService();
    void add(Persona p);

private:
    PersonaRepository PersonaRepo;
};

#endif // PERSONASERVICE_H
