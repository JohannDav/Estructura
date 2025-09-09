#include <iostream>
#include <vector>
#include <string>

int main() {
    const int NUM_NOMBRES = 8;
    std::vector<std::string> nombres;

    std::cout << "Elaborado por Quirino Gonzalez Johann David" << std::endl;;
    std::cout << "=== INGRESO DE NOMBRES ===" << std::endl;

    // Pedir 8 nombres
    for (int i = 0; i < NUM_NOMBRES; i++) {
        std::string nombre;
        std::cout << "Ingresa el nombre #" << (i + 1) << ": ";
        std::getline(std::cin, nombre);
        nombres.push_back(nombre);
    }

    std::cout << "\n=== LISTA DE NOMBRES ===" << std::endl;

    // Mostrar nombres
    for (size_t i = 0; i < nombres.size(); i++) {
        std::cout << "Indice " << i << ": " << nombres[i] << std::endl;
    }

    std::cout << "\n=== BUSCAR NOMBRE ===" << std::endl;

    // Buscar nombre
    std::string nombreBuscado;
    std::cout << "Ingresa el nombre a buscar: ";
    std::getline(std::cin, nombreBuscado);

    bool encontrado = false;
    int indiceEncontrado = -1;

    // Búsqueda manual
    for (size_t i = 0; i < nombres.size(); i++) {
        if (nombres[i] == nombreBuscado) {
            encontrado = true;
            indiceEncontrado = i;
            break;
        }
    }

    if (encontrado) {
        std::cout << "El nombre '" << nombreBuscado << "' se encuentra en el indice: " << indiceEncontrado << std::endl;
    } else {
        std::cout << "El nombre '" << nombreBuscado << "' no existe en la lista." << std::endl;
    }

    return 0;
}
