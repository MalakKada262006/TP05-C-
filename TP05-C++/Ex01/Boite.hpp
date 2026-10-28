#ifndef BOITE_HPP
#define BOITE_HPP

#include <iostream>

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;
    static int nbBoites;

public:
    Boite();
    Boite(double l, double la, double h);

    ~Boite();

    static int getNombreBoites();

    void afficher() const;
};

#endif
