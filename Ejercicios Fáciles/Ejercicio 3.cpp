#include <iostream>

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Comprobar si el número es par o impar
    if (numero % 2 == 0) {
        std::cout << numero << " es un número par." << std::endl;
    } else {
        std::cout << numero << " es un número impar." << std::endl;
    }

    return 0;
}
