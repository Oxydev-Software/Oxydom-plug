#include <string>
#include "Agence.h"

#ifndef UNTITLED_COMMERCIAL_H
#define UNTITLED_COMMERCIAL_H

using namespace std;

class Commercial {
public:
    int idCommercial;
    string prenom;
    string nom;
    string email;
    string codeCommercial;
    string telephone;
    string motDePasse;
    float pourcentageCommission;
    Agence idAgence;
};


#endif //UNTITLED_COMMERCIAL_H
