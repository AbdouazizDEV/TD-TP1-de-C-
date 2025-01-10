#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Etudiant.h"
#include "Etudiant.cpp"
#include "Complexe.h"
#include "Complexe.cpp"
#include "Eq2Degre.h"
#include "Eq2Degre.cpp"


using namespace std;

int main() {
// Exercice 1

    // Rectangle r(5, 3);
    
    // cout << "Test initial :" << endl;
    // r.affichage();
    
    // cout << "\nModification des dimensions :" << endl;
    // r.setLargeur(7);
    // r.setHauteur(4);
    // r.affichage();
    
// Exercice 2

    // // Création de deux étudiants
    // Etudiant e1("Diop", "Fatou");
    // Etudiant e2("Ndiaye", "Omar");

    // // Saisie des notes
    // cout << "Pour le premier étudiant :" << endl;
    // e1.saisieNotes();
    
    // cout << "\nPour le deuxième étudiant :" << endl;
    // e2.saisieNotes();

    // // Affichage des informations
    // cout << "\nRésultats :" << endl;
    // e1.affichage();
    // cout << endl;
    // e2.affichage();

    // // Test de egae_quo
    // if(Etudiant::egae_quo(e1, e2)) {
    //     cout << "\nLes deux étudiants ont la même moyenne." << endl;
    // } else {
    //     cout << "\nLes moyennes sont différentes." << endl;
    // }


//exercise 3

    // // Test du constructeur par défaut
    // cout << "Nombre complexe par défaut : ";
    // Complexe c1;
    // c1.affichage();

    // // Test du constructeur avec paramètres
    // cout << "Nombre complexe 3 + 2i : ";
    // Complexe c2(3, 2);
    // c2.affichage();

    // cout << "Nombre complexe 1 - 4i : ";
    // Complexe c3(1, -4);
    // c3.affichage();

    // // Test de l'addition
    // cout << "\nAddition : ";
    // Complexe somme = c2.addition(c3);
    // somme.affichage();

    // // Test de la multiplication
    // cout << "Multiplication : ";
    // Complexe produit = c2.multiplication(c3);
    // produit.affichage();

//exercice 4:

    // Test avec l'équation -2x² + 0.1x + 3 = 0
    Eq2Degre equation(-2.0, 0.1, +3.0);
    
    equation.afficheDiscriminant();
    equation.resoudre();
    equation.afficheSolutions();

    
    return 0;
}