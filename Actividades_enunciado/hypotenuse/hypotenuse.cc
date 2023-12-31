 /**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en ingeniería informática
 * Informática Básica
 *
 * @date Oct 11 2023
 * @autor Saúl Lorenzo Armas  alu0101642468@ull.edu.es
 * @breef This program 
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

// Función para calcular la hipotenusa de un triángulo rectángulo
double CalculateHypotenuse(double longitud1, double longitud2) {
    // Calcular la suma de los cuadrados de los catetos
    double sumOfSquares = longitud1 * longitud1 + longitud2 * longitud2;
    // Calcular la raíz cuadrada aproximada usando la función implementada anteriormente
    return ApproximateRoot(sumOfSquares);
}

int main(int argc, char* argv[]) {
    // Ejemplo de uso
    double cateto1 = std::atoi(argv[1]); 
    double cateto2 = std::atoi(argv[2]);
    if (cateto1 > 0 && cateto2 > 0) {
        double hypotenuse = CalculateHypotenuse(cateto1, cateto2);
        std::cout << "La hipotenusa del triángulo rectángulo es: " << hypotenuse << std::endl;
    } else {
        std::cout << "Las longitudes de los catetos deben ser mayores que cero." << std::endl;
    }
    return 0;
}

