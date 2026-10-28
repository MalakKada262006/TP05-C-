#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>
#include <iostream>

class Utilisateur {
private:
    std::string nom;
    std::string role;
    static int nbUtilisateursConnectes;

public:
    Utilisateur(const std::string& n, const std::string& r);

    ~Utilisateur();

    void afficher() const;

    static int getNbUtilisateursConnectes();
};

#endif
