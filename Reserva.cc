#include "Reserva.h"

/**
 * @brief Constructor para inicializar una reserva.
 * @param paquete El paquete turístico reservado.
 * @param fecha Fecha de la reserva.
 */
Reserva::Reserva(const Paquete& paquete, const std::string& fecha)
    : paquete(paquete), fecha(fecha) {}

/**
 * @brief Obtiene la fecha de la reserva.
 * @return Fecha de la reserva.
 */
std::string Reserva::obtenerFecha() const {
    return fecha;
}

/**
 * @brief Obtiene el paquete reservado.
 * @return Paquete de la reserva.
 */
Paquete Reserva::obtenerPaquete() const {
    return paquete;
}

/**
 * @brief Obtiene el destino del paquete reservado.
 * @return Destino del paquete.
 */
Destino Reserva::obtenerDestino() const {
    return paquete.obtenerDestino();
}
