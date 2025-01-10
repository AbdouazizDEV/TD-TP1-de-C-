#ifndef EQ2DEGRE_H
#define EQ2DEGRE_H

class Eq2Degre {
private:
    double a, b, c;    // Coefficients du polynôme
    double r1, r2;     // Racines de l'équation
    double delta;      // Discriminant

public:
    // Constructeur avec les 3 coefficients
    Eq2Degre(double x1, double x2, double x3);
    
    // Méthodes demandées
    void afficheDiscriminant();
    void resoudre();
    void afficheSolutions();
};

#endif