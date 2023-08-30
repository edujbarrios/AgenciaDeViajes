#include "Cliente.h"
#include <iostream>

/**
 * @brief Constructor para inicializar un cliente.
 * @param nombre Nombre del cliente.
 */
Cliente::Cliente(const std::string& nombre) : nombre_(nombre) {}

/**
 * @brief Agrega una reserva al cliente.
 * @param reserva La reserva a agregar.
 */
void Cliente::agregarReserva(const Reserva& reserva) {
    reservas_.push_back(reserva);
}

/**
 * @brief Obtiene todas las reservas del cliente.
 * @return Vector de reservas.
 */
std::vector<Reserva> Cliente::obtenerReservas() const {
    return reservas_;
}

/**
 * @brief Muestra las reservas del cliente en la consola.
 */
void Cliente::mostrarReservas() {
    std::cout << "Reservas:\n";
    for (const auto& reserva : reservas_) {  // Itera a través de todas las reservas del cliente
        std::cout << reserva.obtenerPaquete().obtenerDestino().obtenerNombre() << " - " << reserva.obtenerFecha() << "\n";
    }
}

