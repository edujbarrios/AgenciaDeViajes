#include "Reserva.h"
#include "Destino.h"
#include "Paquete.h"
#include "Cliente.h"
#include <iostream>

int main() {
    Destino paris("París", "Francia");
    Destino tokyo("Tokio", "Japón");
    Destino tenerife("Tenerife", "España");
    Destino londres("Londres", "Inglaterra");

    Paquete paquete1(paris, 1000);
    Paquete paquete2(tokyo, 2000);
    Paquete paquete3(tenerife, 3000);
    Paquete paquete4(londres, 4000);

    Cliente cliente("John");

    int opcion;
    do {
        std::cout << "==========================\n";
        std::cout << "         MENU\n";
        std::cout << "==========================\n";
        std::cout << "1. Reservar París\n";
        std::cout << "2. Reservar Tokio\n";
        std::cout << "3. Reservar Tenerife\n";
        std::cout << "4. Reservar Londres\n";
        std::cout << "5. Ver reservas\n";
        std::cout << "6. Salir\n";
        std::cout << "--------------------------\n";
        std::cout << "Elija una opción: ";
        std::cin >> opcion;
        std::cout << "\n";  // Espacio adicional

        Paquete paqueteSeleccionado;
        switch (opcion) {
            case 1:
                paqueteSeleccionado = paquete1;
                break;
            case 2:
                paqueteSeleccionado = paquete2;
                break;
            case 3:
                paqueteSeleccionado = paquete3;
                break;
            case 4:
                paqueteSeleccionado = paquete4;
                break;
            default:
                break;
        }
        if (opcion >= 1 && opcion <= 4) {
            std::cout << "Has seleccionado: " << paqueteSeleccionado.obtenerDestino().obtenerNombre() << "\n";
            std::cout << "Precio: $" << paqueteSeleccionado.obtenerPrecio() << "\n";
            std::cout << "1. Confirmar reserva\n";
            std::cout << "2. Elegir otro destino\n";
            int subopcion;
            std::cin >> subopcion;
            if (subopcion == 1) {
                cliente.agregarReserva(Reserva(paqueteSeleccionado, "2023-09-01"));
                std::cout << "Reserva confirmada.\n";
            }
        } else if (opcion == 5) {
            std::cout << "Tus reservas son:\n";
            std::cout << "--------------------------\n";
            cliente.mostrarReservas();
            std::cout << "--------------------------\n";
        } else if (opcion == 6) {
            std::cout << "Saliendo...\n";
        } else {
            std::cout << "Opción inválida.\n";
        }
        
        std::cout << "\n";  // Espacio adicional antes del próximo ciclo

    } while (opcion != 6);

    return 0;
}
