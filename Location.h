// Created by ruben on 4/5/19.
#ifndef LINKEDLISTVSBINARYTREE_LOCATION_H
#define LINKEDLISTVSBINARYTREE_LOCATION_H
#include <string>

class Location {
    int position_id;
    std::string state_code;
    std::string county;
    double latitude;
    double longitude;
    std::string line;
    std::string construction;
public:
    Location(
            int position_id,
            std::string state_code,
            std::string county,
            double latitude,
            double longitude,
            std::string line,
            std::string construction);

    // Declare los metodos que crea necesario
    void imprimir();
    int get_id();
    Location();
    // Cree que sea necesario agregar destructor, justifique
    // Si destruyo Nodo tambien se destruiria Location? De ser asi no seria necesario pero si no es asi si seria necesario.
};


#endif //LINKEDLISTVSBINARYTREE_LOCATION_H
