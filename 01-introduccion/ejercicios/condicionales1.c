/*
        ejercicio 1 — conversor de calificaciones entre sistemas
escribe un programa que pida una nota en el sistema español (0-10) y la
convierta al sistema americano de letras y al sistema numérico americano
(0-100). usa if/else if/else para la conversión a letras y operaciones
aritméticas para la conversión numérica.

salida:

nota española (0-10): 7.5

--- conversiones ---
sistema español:    7.50 / 10
sistema americano:  75.00 / 100
sistema de letras:  b
estado:             aprobado
*/

#include <stdbool.h>
#include <stdio.h>
int main() {
  float numero_espaniol, numero_americano;
  char numero_letras;
  bool esaprovado = false;

  printf("nota española (0-10): ");
  scanf("%f", &numero_espaniol);

  if (numero_espaniol <= 10) {
    if (numero_espaniol >= 9 && numero_espaniol < 10) {
      numero_letras = 'a';
      numero_americano = numero_espaniol * 10;
      esaprovado = true;
    } else if (numero_espaniol >= 7 && numero_espaniol < 9) {
      numero_letras = 'b';
      numero_americano = numero_espaniol * 10;
      esaprovado = true;
    } else if (numero_espaniol >= 5 && numero_espaniol < 7) {
      numero_letras = 'c';
      numero_americano = numero_espaniol * 10;
      esaprovado = true;
    } else if (numero_espaniol >= 3 && numero_espaniol < 5) {
      numero_letras = 'd';
      numero_americano = numero_espaniol * 10;
      esaprovado = false;
    } else if (numero_espaniol >= 0 && numero_espaniol < 3) {
      numero_letras = 'f';
      numero_americano = numero_espaniol * 10;
      esaprovado = false;
    }
  } else {
    printf("coloque un numero dentro del rango del 0 - 10");
  }

  printf("--- conversiones ---\n"
         "sistema español: %.2f / 10 \n"
         "sistema americano: %.2f / 100 \n"
         "sistema de letras: %c\n",
         numero_espaniol, numero_americano, numero_letras);

  if (esaprovado == true) {
    printf("estado: aprobado");
  } else {
    printf("estado: no aprobado\n");
  }
  return 0;
}
