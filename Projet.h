#include <string>
#include "Client.h"

#ifndef UNTITLED_PROJET_H
#define UNTITLED_PROJET_H

using namespace std;

class Projet {
public:
    int idProjet;
    string libelle;
    string code;
    string status;
    Client idClient;
};


#endif //UNTITLED_PROJET_H
