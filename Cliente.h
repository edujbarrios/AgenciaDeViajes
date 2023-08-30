#ifndef CLIENTE_H
#define CLIENTE_H

#include <vector>
#include "Reserva.h"
#include <string>

/**
 * @class Cliente
 * @brief Representa un cliente que realiza reservas.
 */
class Cliente {
public:
    Cliente(const std::string& nombre);
    void agregarReserva(const Reserva& reserva);
    std::vector<Reserva> obtenerReservas() const;
    void mostrarReservas();

private:
    std::string nombre_;
    std::vector<Reserva> reservas_;
};

#endif // CLIENTE_H

