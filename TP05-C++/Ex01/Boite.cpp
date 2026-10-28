#include "Boite.hpp"

int Boite::nbBoites = 0;

Boite::Boite() : longueur(1.0), largeur(1.0), hauteur(1.0) {
    nbBoites++;
}

Boite::Boite(double l, double la, double h) : longueur(l), largeur(la), hauteur(h) {
    nbBoites++;
}

Boite::~Boite() {
    nbBoites--;
}

int Boite::getNombreBoites() {
    return nbBoites;
}

void Boite::afficher() const {
    std::cout << "Boîte [Dimensions : " << longueur << " x " << largeur << " x " << hauteur << "]" << std::endl;
}
