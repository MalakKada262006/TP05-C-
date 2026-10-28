#include "Produit.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== Creation des produits (TVA initiale à 20%) ===" << std::endl;
    Produit p1("Ordinateur portable", 800);
    Produit p2("Casque audio", 50);
    Produit p3("Smartphone", 500);

    p1.afficher();
    p2.afficher();
    p3.afficher();

    std::cout << "\n=== Modification du taux de TVA a 10% ===" << std::endl;
    Produit::modifierTVA(10.0f);

    p1.afficher();
    p2.afficher();
    p3.afficher();

    return 0;
}
