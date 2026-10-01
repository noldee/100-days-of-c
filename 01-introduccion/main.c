#include <stdio.h>

void imprimir_datos(int edad, char *nombre) {
  printf("Hola tu nombre es: %s y tu edad es: %d", nombre, edad);
}

int main() {
  /*
        Short: 16 bits
        int: 32 bits
        Long: 64 bits
        Unsigned: Usa todo el tamaño disponible
 */

  // Declaro un caracter y un numero.

  imprimir_datos(20, "Walter");

  return 0;
}
