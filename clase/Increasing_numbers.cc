 /**
 * Universidad de la Laguna
 * Escuela superior de ingeniería y tecnología
 * Grado en ingeniería informática
 * Informática Básica
 *
 * @date Oct -- 2023 alu0101642468@ull.edu.es
 * @autor Saúl Lorenzo Armas
 * @breef This program 
 *        
 *        
 * @bugs There aren't problems in the program
 * @see 
 */

#include <iostream>

bool is_increasing(int n) {
  for( int i{0}; i < n; ++i) {
    int digito = n % 10;
    int digito_siguiente = (n % 100) % 10;
    if (digito <= digito_siguiente) {
    return true;
    } else {
    return false;
   }
  }
}
int main() {
  int number{0};
  std::cin >> number;
  if (is_increasing) {
      std::cout << "is_increasing("<< number <<") → true" << std::endl;
  } else {
      std::cout << "is_increasing("<< number <<") →  false" << std::endl;
     }   

  return 0;
}

