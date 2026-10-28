#include "Produit.hpp"

float Produit::tauxTVA = 20.0f;

Produit::Produit(const std::string& n, double prix) : nom(n), prixHT(prix) {}

double Produit::getPrixTTC() const {
    return prixHT * (1.0 + (tauxTVA / 100.0f));
}

// Méthode d'affichage
void Produit::afficher() const {
    std::cout << "Produit : " << nom << " | Prix HT : " << prixHT
              << " € | Prix TTC (TVA: " << tauxTVA << "%) : " << getPrixTTC() << " €" << std::endl;
}

// Méthode statique pour modifier le taux de TVA
void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}
