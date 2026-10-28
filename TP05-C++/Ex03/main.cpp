#include "Utilisateur.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== Etat initial ===" << std::endl;
    std::cout << "Utilisateurs connectes : " << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

    std::cout << "=== Simulation des connexions ===" << std::endl;
    {
        Utilisateur u1("Alex", "admin");
        std::cout << "-> Nombre d utilisateurs connectes : " << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

        Utilisateur u2("Jad", "visiteur");
        std::cout << "-> Nombre d utilisateurs connectes : " << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

        Utilisateur u3("Charlie", "visiteur");
        std::cout << "-> Nombre d utilisateurs connectes : " << Utilisateur::getNbUtilisateursConnectes() << "\n\n";

        std::cout << "=== Fin du bloc : simulation des deconnexions automatiques ===" << std::endl;
    }

    std::cout << "\n=== Etat final ===" << std::endl;
    std::cout << "Utilisateurs connectes : " << Utilisateur::getNbUtilisateursConnectes() << std::endl;

    return 0;
}
