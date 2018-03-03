#include <string>
#include "Commercial.h"

#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H

using namespace std;

class Client {
public:
    int idClient;
    string prenom;
    string nom;
    string email;
    string adresse;
    string ville;
    string pays;
    string telephone;
    string photo;
    string civilite;
    Commercial idCommercial;
};


#endif //UNTITLED_CLIENT_H
