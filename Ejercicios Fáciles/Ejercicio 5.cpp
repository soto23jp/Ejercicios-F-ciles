#include <iostream>

unsigned long long calcularFactorial(int numero) {
    if (numero < 0) {
        return 0; // El factorial de números negativos no está definido.
    }
    
    if (numero == 0 || numero == 1) {
        return 1; // El factorial de 0 y 1 es 1.
    }
    
    return numero * calcularFactorial(numero - 1);
}

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Calcular el factorial llamando a la función calcularFactorial
    unsigned long long factorial = calcularFactorial(numero);

    std::cout << "El factorial de " << numero << " es " << factorial << std::endl;

    return 0;
}
712