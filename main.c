#include <stdio.h>
#include <math.h>

float divisao (float a, float b){
  return a / b;
}

int main() {
  float num1, num2;
  float resultado;
 
  /*
    Crie uma calculadora que peça ao usuário a operação que deseja realizar.
      A calculadora não deve ser encerrada até que o usuário concorde.
      Operações para serem adicionadas:
      - Soma
      - Subtração
      - Multiplicação
      - Divisão
      - Exponenciação
      - Raíz quadrada
      - Fatorial (só para números inteiros positivos)
      - Logaritmo natural (só para valores positivos)
  */
 // calcule a divisão entre dois números 
 printf ("Escreva dois numeros.\n");
 scanf ("%f, %f", &num1, &num2);

   // Verificar divisão por zero
   if (num2 == 0) {
    printf("Erro: Divisão por zero!\n");
    return 1;
   }

 resultado = divisao (num1, num2);
// exiba o resultado 

 printf ("resultado:%.2f\n", resultado);

    return 0;
}