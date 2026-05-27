#include <iostream>
#include "sensor.h"

int main() {
    std::cout << "Iniciando sistema de telemetria..." << std::endl;
    std::cout << "Lectura actual: " << leerTemperatura() << " grados." << std::endl;
    return 0;
}