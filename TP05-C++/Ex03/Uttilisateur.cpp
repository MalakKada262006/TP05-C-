#include "Utilisateur.hpp"

int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(const std::string& n, const std::string& r)
    : nom(n), role(r) {
    nbUtilisateursConnectes++;
    std::cout << "[Connexion] " << nom << " (" << role << ") s est connecte." << std::endl;
}

Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;
    std::cout << "[Deconnexion] " << nom << " s est deconnecte." << std::endl;
}

void Utilisateur::afficher() const {
    std::cout << "Utilisateur : " << nom << " | Role : " << role << std::endl;
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}
