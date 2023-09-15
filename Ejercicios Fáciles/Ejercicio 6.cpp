
#include <iostream>
#include <vector>

int contarOvejasPresentes(const std::vector<bool>& ovejas) {
    int contador = 0;

    for (bool estaPresente : ovejas) {
        if (estaPresente) {
            contador++;
        }
    }

    return contador;
}

int main() {
    std::vector<bool> ovejas = {
        true, true, true, false, true, true, true, true, false, true, false, true,
        false, false, true, true, true, true, false, false, true, true
    };

    int ovejasPresentes = contarOvejasPresentes(ovejas);

    std::cout << "El número de ovejas presentes es: " << ovejasPresentes << std::endl;

    return 0;
}
