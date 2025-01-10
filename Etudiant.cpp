#include "Etudiant.h"
#include <iostream>
using namespace std;

Etudiant::Etudiant(string n, string p) {
    nom = n;
    prenom = p;
    // Initialisation du tableau à 0
    for(int i = 0; i < 10; i++) {
        tabnotes[i] = 0;
    }
}

void Etudiant::saisieNotes() {
    cout << "Saisie des notes pour " << prenom << " " << nom << ":" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "Note " << i+1 << ": ";
        cin >> tabnotes[i];
    }
}

void Etudiant::affichage() {
    cout << "Étudiant: " << prenom << " " << nom << endl;
    cout << "Notes: ";
    for(int i = 0; i < 10; i++) {
        cout << tabnotes[i] << " ";
    }
    cout << endl;
    cout << "Moyenne: " << moyenne() << endl;
    cout << "Statut: " << (admis() ? "Admis" : "Non admis") << endl;
}

float Etudiant::moyenne() {
    float somme = 0;
    for(int i = 0; i < 10; i++) {
        somme += tabnotes[i];
    }
    return somme / 10;
}

int Etudiant::admis() {
    return (moyenne() >= 10) ? 1 : 0;
}

int Etudiant::egae_quo(Etudiant E1, Etudiant E2) {
    return (E1.moyenne() == E2.moyenne()) ? 1 : 0;
}