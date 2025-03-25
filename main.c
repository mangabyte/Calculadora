#include <stdio.h>
#include <math.h>

void soma(float *a, float* b) {
  *a + *b;
}
float logaritmoNatural(float a) {
    if (a <= 0) {
        return -1; // função retorna -1 em caso de erro.
	//O logaritmo natural não está definido para números menores ou iguais a zero.
    }
    return log(a);
}
int main() {
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
    
    return 0;
}
