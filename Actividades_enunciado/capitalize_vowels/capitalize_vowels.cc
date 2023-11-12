 /**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en ingeniería informática
 * Informática Básica
 *
 * @date Oct 11 2023
 * @autor Saúl Lorenzo Armas
 * @breef This program take as a parameter a string of characters without spaces 
 *        and modify it so that the consonants are lowercase and the vowels are uppercase. 
 *        Characters other than uppercase or lowercase letters must remain unchanged.
 * @bugs There aren't problems in the program
 * @see https://github.com/IB-2023-2024/P09-functions2/blob/main/functions.md
 */


#include <iostream>

// Función para capitalizar una letra
void capitalizarLetra(char &letra) {
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        // Si es una letra
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            // Capitalizar vocal
            letra += 'A' - 'a';
        }  else if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            // Descapitalizar vocal
            letra += 'a' - 'A';
        } else { 
        }
    }
}

int main() {
    std::string input;

    std::cout << "Ingrese una cadena sin espacios: ";
    std::cin >> input;

    for (char &letra : input) {
        capitalizarLetra(letra);
    }

    std::cout << "Cadena modificada: " << input << std::endl;

    return 0;
}

