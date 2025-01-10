#include "Complexe.h"
#include <iostream>
using namespace std;

// Constructeur par défaut
Complexe::Complexe() {
    reel = 0;
    imag = 0;
}

// Constructeur avec paramètres
Complexe::Complexe(double r, double i) {
    reel = r;
    imag = i;
}

// Addition de deux nombres complexes
Complexe Complexe::addition(Complexe c) {
    return Complexe(reel + c.reel, imag + c.imag);
}

// Multiplication de deux nombres complexes
Complexe Complexe::multiplication(Complexe c) {
    double r = reel * c.reel - imag * c.imag;
    double i = reel * c.imag + imag * c.reel;
    return Complexe(r, i);
}

// Affichage
void Complexe::affichage() {
    if (imag >= 0)
        cout << reel << " + " << imag << "i";
    else
        cout << reel << " - " << -imag << "i";
    cout << endl;
}