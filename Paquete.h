#ifndef PAQUETE_H
#define PAQUETE_H

#include "Destino.h"
#include <vector>

/**
 * @class Paquete
 * @brief Representa un paquete de viaje.
 */
class Paquete {
public:
    Paquete();  // Constructor por defecto
    Paquete(Destino destino, double precio);  // Constructor existente
    Destino obtenerDestino() const;
    double obtenerPrecio() const;
    void agregarReserva(const std::string& fecha);

private:
    Destino destino;
    double precio;
    std::vector<std::string> reservas;  // Lista de fechas de reserva
};

#endif // PAQUETE_H

