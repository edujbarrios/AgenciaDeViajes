#pragma once

#include "Paquete.h"
#include <string>

/**
 * @class Reserva
 * @brief Representa una reserva en la agencia de viajes.
 */
class Reserva {
public:
    Reserva(const Paquete& paquete, const std::string& fecha);
    std::string obtenerFecha() const;
    Paquete obtenerPaquete() const;
    Destino obtenerDestino() const;  // Método nuevo

private:
    Paquete paquete;
    std::string fecha;
};
