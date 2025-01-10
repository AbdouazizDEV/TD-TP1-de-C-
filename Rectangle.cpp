#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double l, double h) {
    largeur = l;
    hauteur = h;
}

double Rectangle::perimetre() {
    return 2 * (largeur + hauteur);
}

double Rectangle::surface() {
    return largeur * hauteur;
}

void Rectangle::affichage() {
    cout << "Rectangle de largeur " << largeur << " et de hauteur " << hauteur << endl;
    cout << "Périmètre : " << perimetre() << endl;
    cout << "Surface : " << surface() << endl;
}

double Rectangle::getLargeur() { return largeur; }
double Rectangle::getHauteur() { return hauteur; }

void Rectangle::setLargeur(double l) { largeur = l; }
void Rectangle::setHauteur(double h) { hauteur = h; }