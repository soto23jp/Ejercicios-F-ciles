#include <iostream>
#include <cmath>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los números menores o iguales a 1 no son primos.
    }

    // Iterar desde 2 hasta la raíz cuadrada del número
    for (int i = 2; i <= std::sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false; // El número es divisible por otro número, no es primo.
        }
    }

    return true; // Si no se encontraron divisores, el número es primo.
}

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Llamar a la función esPrimo para verificar si es primo o no
    if (esPrimo(numero)) {
        std::cout << numero << " es un número primo." << std::endl;
    } else {
        std::cout << numero << " no es un número primo." << std::endl;
    }

    return 0;
}
