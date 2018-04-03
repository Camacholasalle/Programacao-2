#include <stdio.h>
  int gasolina_alcool(float a, float g) {

    float result;

    result = (a / g);

    if (result >= 0.7) {

      return 1;
    }

  }

int main() {
  float a, b;
  int resultado;

  printf("\nDigite o valor do Alcool: ");
  scanf("%f", & a);

  printf("\nDigite o valor da gasolina: ");
  scanf("%f", & b);

  resultado = gasolina_alcool(a, b);

  if (resultado == 1) {
    printf("\nVai de gasolina!!\n");
  } else {
    printf("\nVai de alcool!!\n");
  }
}
