#include <iostream>

double elevarNumero(double numero, int potencia) {
    if (potencia < 0) {
        return 1.0 / elevarNumero(numero, -potencia); // Manejo de potencias negativas
    } else if (potencia == 0) {
        return 1.0; // Cualquier número elevado a la potencia 0 es 1
    }

    double resultado = 1.0;

    for (int i = 0; i < potencia; ++i) {
        resultado *= numero;
    }

    return resultado;
}

int main() {
    double numero;
    int potencia;

    // Solicitar al usuario ingresar el número y la potencia
    std::cout << "Ingrese un número: ";
    std::cin >> numero;
    std::cout << "Ingrese la potencia: ";
    std::cin >> potencia;

    // Calcular el resultado llamando a la función elevarNumero
    double resultado = elevarNumero(numero, potencia);

    std::cout << numero << " elevado a la potencia " << potencia << " es igual a " << resultado << std::endl;

    return 0;
}
