#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    double tabnotes[10];

public:
    Etudiant(std::string n, std::string p);
    void saisieNotes();
    void affichage();
    float moyenne();
    int admis();
    static int egae_quo(Etudiant E1, Etudiant E2);
};

#endif