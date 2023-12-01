#include "Pasajero.h"

int main() {
    Pasajero pasajero1("Ana García", 40, "París");
    Pasajero pasajero2("Jose Rodriguez", 65, "Nueva York");
    Pasajero pasajero3("Angelo Franco", 20, "Tokio");

    std::cout << "¡Bienvenidos al Aeropuerto!" << std::endl << std::endl;
    pasajero1.mostrarInformacion();
    pasajero2.mostrarInformacion();
    pasajero3.mostrarInformacion();

    return 0;
}
