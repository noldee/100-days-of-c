// Ejercicio 1: Datos personales

#include <stdio.h>

int main() {

  char nombre[50];
  int edad;
  float altura;

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  printf("Ingrese su altura: ");
  scanf("%f", &altura);

  printf("Su nombre es: %s\nSu edad es: %d\nSu altura es: %.2f", nombre, edad,
         altura);

  return 0;
}
