 /**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en ingeniería informática
 * Informática Básica
 *
 * @date Oct 10 2023
 * @autor Saúl Lorenzo Armas
 * @breef This program take as a parameter a string of characters without spaces
 *        and modify it so that the consonants are lowercase and the vowels are uppercase.
 * @bugs There aren't problems in the program
 * @see https://github.com/IB-2023-2024/P09-functions2/blob/main/functions.md
 */

#include <iostream>
#include <vector>
#include <limits>

/**
     * @brief Esta funcion verifica que los vectores tengan la misma longitud.
     * @param vector1.size() es el tamaño del primer vector.
     * @param vector2.size() es el tamaño del segundo vector.
     * @param vector1 es el primer vector.····
     * @param vector2 es el segundo vector.
     */

double comprobar_tamano_vectores(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    if (vector1.size() != vector2.size()) {
        std::cerr << "Error: Los vectores no tienen la misma longitud." << std::endl;
        return 0;
    }
    return 1;
}


/**
     * @brief Esta funcion calcula el producto escalar de dos vectores.
     * @param vector1 es el primer vector.
     * @param vector2 es el segundo vector.
     * @param i se encarga intoducir numeros en el vector.
 */

double calcularProductoEscalar(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double resultado = 0;
    for (std::size_t i = 0; i < vector1.size(); ++i) {
        resultado += vector1[i] * vector2[i];
    }
    return resultado;
}

int main() {
    std::vector<double> vectorA;
    std::vector<double> vectorB;
    double elemento;
    // Obtener elementos para el primer vector
    std::cout << "Ingrese los elementos del primer vector separados por espacios: ";
    while (std::cin >> elemento) {
        vectorA.push_back(elemento);
    }
    // Limpiar el búfer de entrada
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // Obtener elementos para el segundo vector
    std::cout << "Ingrese los elementos del segundo vector separados por espacios: ";
    while (std::cin >> elemento) {
        vectorB.push_back(elemento);
    }
    // Comprobar el tamaño de los vectores
    if (!comprobar_tamano_vectores(vectorA, vectorB)) {
        // Salir del programa si los vectores tienen tamaños diferentes
        return 1;
    }
    // Calcular el producto escalar
    double productoEscalar = calcularProductoEscalar(vectorA, vectorB);
    // Mostrar el resultado
    std::cout << "El producto escalar es: " << productoEscalar << std::endl;
    return 0;
}

