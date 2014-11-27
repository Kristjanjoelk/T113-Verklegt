#include "personarepository.h"


PersonaRepository::PersonaRepository(){
    PersonaVector = vector<Persona>();
}
void PersonaRepository::add(Persona p){
    PersonaVector.push_back(p);
}
