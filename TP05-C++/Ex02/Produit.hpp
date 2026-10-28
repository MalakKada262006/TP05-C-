#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>
#include <iostream>

class Produit {
private:
    std::string nom;
    double prixHT;
    static float tauxTVA;

public:
    Produit(const std::string& n, double prix);

    // Méthodes
    double getPrixTTC() const;
    void afficher() const;

    // Méthode statique pour modifier le taux de TVA pour tous les produits
    static void modifierTVA(float nouveauTaux);
};

#endif
