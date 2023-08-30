/**
 * @file Destino.hpp
 * @author Eduardo J. Barrios (eduardojbarriosgarcia@gmail.com)
 * @brief Clase para manejar un destino turístico.
 */

#pragma once

#include <string>

/**
 * @class Destino
 * @brief Representa un destino turístico en la agencia de viajes.
 */
class Destino {
public:
    /**
     * @brief Constructor para inicializar un destino.
     * @param nombre Nombre del destino.
     * @param descripcion Descripción breve del destino.
     */
    Destino(const std::string& nombre, const std::string& descripcion);

    /**
     * @brief Obtiene el nombre del destino.
     * @return Nombre del destino.
     */
    std::string obtenerNombre() const;

    /**
     * @brief Obtiene la descripción del destino.
     * @return Descripción del destino.
     */
    std::string obtenerDescripcion() const;

private:
    std::string nombre;
    std::string descripcion;
};
