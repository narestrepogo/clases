#include <iostream>

int main () {
  int number, a=1;  /* Colocamos a=1 para que empiece el conteo incluyendo el número digitado por el usuario. */

  std::cout << "Hola, escribe un número entero, por favor. \n " ;
  std::cout << "Número: " ;
  std::cin >> number ;
  std::cout << number << std::endl ;

  while (number!=1)
    { a++ ; // Suma 1 cada vez que se repita el proceso.
      if (number%2==0) {
	number=number/2 ;
      }
      else {
	number=3*(number)+1;
      }
      std::cout << number << std::endl ;
    }
  std::cout << "Cantidad de números en la secuencia: ";
  std::cout << a << std::endl ; /* Conteo total de iteraciones, incluyendo el número digitado por el usuario. */
  std::cout << "Fabián Esteban Rosero Roldán" << std::endl ;
  std::cout << "Nathaly Restrepo Gómez" << std::endl ;

  return 0;
}
