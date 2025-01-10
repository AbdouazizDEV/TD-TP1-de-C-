#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double largeur;
    double hauteur;

public:
    Rectangle(double l, double h);
    double perimetre();
    double surface();
    void affichage();
    double getLargeur();
    double getHauteur();
    void setLargeur(double l);
    void setHauteur(double h);
};

#endif