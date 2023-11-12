 /**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en ingeniería informática
 * Informática Básica
 *
 * @date Oct 11 2023
 * @autor Saúl Lorenzo Armas
 * @breef This program take as parameter a real number greater than zero number
          and return its square root
          with an error of ±EPSILON (where EPSILON is a sufficiently small real constant - for example, 1e-4).
 * @bugs There aren't problems in the program
 * @see https://github.com/IB-2023-2024/P09-functions2/blob/main/functions.md
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <sstream>

constexpr double EPSILON = 1e-4;
double ApproximateRoot(double number) {
    // Valores iniciales
    double root = 1.0;
    double delta = 1.0;
    // Mientras que la diferencia entre root² y number sea mayor que EPSILON
    while (std::abs(root * root - number) > EPSILON) {
        // Si delta es positivo
        if (delta > 0) {
            // Mientras que root² sea menor que number, sume delta a root
            while (root * root < number) {
                root += delta;
            }
        } else {
            // En caso contrario, mientras que root² sea mayor que number, sume delta a root
            while (root * root > number) {
                root += delta;
            }
        }
        // Multiplique delta por -0.5
        delta *= -0.5;
    }
    // Devuelva el valor root
    return root;
}

int main(int argc, char* argv[]) {
    // Ejemplo de uso
    double number = std::atoi(argv[1]);
    if (number > 0) {
        double result = ApproximateRoot(number);
        std::cout << "La raíz cuadrada aproximada de " << number << " es: " << result << std::endl;
    } else {
        std::cout << "El número ingresado no es válido. Debe ser mayor que cero." << std::endl;
    }
    return 0;
}

