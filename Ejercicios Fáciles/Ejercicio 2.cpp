#include <iostream>

int main() {
    std::cout << "Múltiplos de 3 entre 1 y 20:" << std::endl;

    for (int i = 1; i <= 20; ++i) {
        if (i % 3 == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
