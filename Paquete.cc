#include "Paquete.h"

/**
 * @brief Constructor por defecto.
 */
Paquete::Paquete() : destino(Destino("", "")), precio(0) {}

/**
 * @brief Constructor que inicializa el paquete con un destino y un precio.
 * @param destino El destino del paquete.
 * @param precio El precio del paquete.
 */
Paquete::Paquete(Destino destino, double precio) : destino(destino), precio(precio) {}

/**
 * @brief Obtiene el destino del paquete.
 * @return El destino del paquete.
 */
Destino Paquete::obtenerDestino() const {
    return destino;
}

/**
 * @brief Obtiene el precio del paquete.
 * @return El precio del paquete.
 */
double Paquete::obtenerPrecio() const {
    return precio;
}

/**
 * @brief Agrega una reserva al paquete.
 * @param fecha La fecha de la reserva.
 */
void Paquete::agregarReserva(const std::string& fecha) {
    reservas.push_back(fecha);
}

