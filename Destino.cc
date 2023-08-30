#include "Destino.h"

Destino::Destino(const std::string& nombre, const std::string& descripcion)
    : nombre(nombre), descripcion(descripcion) {}

std::string Destino::obtenerNombre() const {
    return nombre;
}

std::string Destino::obtenerDescripcion() const {
    return descripcion;
}
