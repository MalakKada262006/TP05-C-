#include "Boite.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== Debut du programme ===" << std::endl;
    std::cout << "Nombre de boites au depart : " << Boite::getNombreBoites() << std::endl;

    {
        Boite b1;
        Boite b2(2.5, 3.0, 1.5);
        Boite b3(10.0, 5.0, 2.0);

        std::cout << "\n[A l interieur du bloc]" << std::endl;
        std::cout << "Nombre total de boites crees : " << Boite::getNombreBoites() << std::endl;

        b1.afficher();
        b2.afficher();
    }

    std::cout << "\n[Apres la sortie du bloc]" << std::endl;
    std::cout << "Nombre de boites restantes : " << Boite::getNombreBoites() << std::endl;

    Boite* b4 = new Boite(4.0, 4.0, 4.0);
    std::cout << "\n[Apres creation dynamique d une boite]" << std::endl;
    std::cout << "Nombre total de boites : " << Boite::getNombreBoites() << std::endl;

    delete b4;

    std::cout << "\n[Apres suppression de la boite dynamique]" << std::endl;
    std::cout << "Nombre de boites finales : " << Boite::getNombreBoites() << std::endl;

    return 0;
}
