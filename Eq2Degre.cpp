#include "Eq2Degre.h"
#include <iostream>
#include <cmath>
using namespace std;

Eq2Degre::Eq2Degre(double x1, double x2, double x3) {
    // Initialisation des coefficients
    a = x1;
    b = x2;
    c = x3;
    
    // Calcul du discriminant
    delta = (b * b) - (4 * a * c);
}

void Eq2Degre::afficheDiscriminant() {
    cout << "Discriminant = " << delta << endl;
}

void Eq2Degre::resoudre() {
    if (a == 0) {
        cout << "Ce n'est pas une équation du second degré (a=0)" << endl;
        return;
    }

    if (delta > 0) {
        // Deux solutions réelles
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
    }
    else if (delta == 0) {
        // Une solution réelle unique
        r1 = r2 = -b / (2 * a);
    }
    // Si delta < 0, pas de solutions réelles
}

void Eq2Degre::afficheSolutions() {
    if (a == 0) {
        cout << "Pas de solutions (ce n'est pas une équation du second degré)" << endl;
        return;
    }

    if (delta > 0) {
        cout << "Deux solutions réelles :" << endl;
        cout << "x1 = " << r1 << endl;
        cout << "x2 = " << r2 << endl;
    }
    else if (delta == 0) {
        cout << "Une solution réelle unique :" << endl;
        cout << "x = " << r1 << endl;
    }
    else {
        cout << "Pas de solutions réelles (discriminant négatif)" << endl;
    }
}