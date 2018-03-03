#include <string>
#include "Projet.h"

#ifndef UNTITLED_INTERVENTION_H
#define UNTITLED_INTERVENTION_H


class Intervention {
public:
    std::string dateReprise; // maybe work out an actual date-time type here
    Projet idProjet;
    Commercial idcommercial;
};


#endif //UNTITLED_INTERVENTION_H
