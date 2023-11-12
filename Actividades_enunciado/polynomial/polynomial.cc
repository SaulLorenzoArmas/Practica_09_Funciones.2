 /**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en ingeniería informática
 * Informática Básica
 *
 * @date Oct 11 2023
 * @autor Saúl Lorenzo Armas
 * @breef This program 
 *        Receive as parameters a vector of real coefficients
 *        and a real value and calculate the value of the corresponding polynomial in the given value.
 * @bugs There aren't problems in the program
 * @see https://github.com/IB-2023-2024/P09-functions2/blob/main/functions.md
 */


#include <iostream>
#include <vector>

// Función para evaluar un polinomio en un valor dado
double evaluarPolinomio(const std::vector<double>& coefficients, double value) {
    // Grado del polinomio
    int grado = coefficients.size() - 1;
    // Inicializar el resultado con el coeficiente de mayor grado
    double resultado = coefficients[grado];
    // Calcular el valor del polinomio utilizando el esquema proporcionado
    for (int i = grado - 1; i >= 0; --i) {
        resultado = resultado * value + coefficients[i];
    }
    return resultado;
}

int main() {
    // Solicitar al usuario que ingrese los coeficientes del polinomio
    int grado;
    std::cout << "Ingrese el grado del polinomio: ";
    std::cin >> grado;
    std::vector<double> coeficientes;
    coeficientes.resize(grado + 1);
    std::cout << "Ingrese los coeficientes del polinomio empezando por el término de mayor grado:\n";
    for (int i = grado; i >= 0; --i) {
        std::cout << "Coeficiente para x^" << i << ": ";
        std::cin >> coeficientes[i];
    }
    // Solicitar al usuario que ingrese el valor en el que evaluar el polinomio
    double valor;
    std::cout << "Ingrese el valor en el que desea evaluar el polinomio: ";
    std::cin >> valor;
    // Calcular el valor del polinomio en el punto dado
    double resultado = evaluarPolinomio(coeficientes, valor);
    // Mostrar el resultado
    std::cout << "El valor del polinomio en x = " << valor << " es: " << resultado << std::endl;

    return 0;
}

