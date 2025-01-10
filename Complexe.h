#ifndef COMPLEXE_H
#define COMPLEXE_H

class Complexe {
private:
    double reel;    // Partie réelle
    double imag;    // Partie imaginaire

public:
    Complexe();                     // Constructeur par défaut
    Complexe(double r, double i);   // Constructeur avec paramètres
    
    // Opérations
    Complexe addition(Complexe c);
    Complexe multiplication(Complexe c);
    
    // Affichage
    void affichage();
};

#endif