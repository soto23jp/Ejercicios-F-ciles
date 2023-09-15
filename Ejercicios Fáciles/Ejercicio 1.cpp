#include <iostream>

int main() {
    double centimetros, pulgadas;

    // Solicitar al usuario la longitud en centímetros
    std::cout << "Ingrese la longitud en centimetros: ";
    std::cin >> centimetros;

    // Realizar la conversión a pulgadas
    pulgadas = centimetros / 2.54;

    // Mostrar el resultado
    std::cout << centimetros << " cm equivale a " << pulgadas << " pulgadas." << std::endl;

    return 0;
}
