#include <stdio.h>
#include <math.h>

float soma(float *a, float *b) {
  return *a + *b;
}

float divisao (float a, float b){
  return a / b;
}

float logaritmoNatural(float a) {
  if (a <= 0) return -1; 
/*
  função retorna -1 em caso de erro.
  O logaritmo natural não está definido para números menores ou iguais a zero.
*/
  return log(a);
}

double calcularRaizQuadrada(double numero) {
  if (numero < 0) {
    return -1;
  }
  return sqrt(numero);
}

float exponenciacao(float base, unsigned int expoente){
  if(expoente == 0) return 1;
  return base * exponenciacao(base, expoente-1);
}

int fatorial(int num) {
  if (num==0) return 1;
  return num * fatorial(num-1);
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
      - Raiz quadrada
      - Fatorial (só para números inteiros positivos)
      - Logaritmo natural (só para valores positivos)
  */
  int escolha = 0, a, b;
  do{
    printf("Digite a opção desejada para acessar a calculadora");
    printf("1)Soma\n2)Subtração\n3)Multiplicação\n4)Divisão\n5)Exponenciação\n6)Raiz Quadrada\n7)Fatorial\n");
    printf("8)Logaritmo Natural\n");
    scanf("%d", &escolha);    
    printf("Digite os dois valores para a operação desejada: ");
    scanf("%d %d", &a, &b);
    switch (escolha){
    case 1:
      soma(&a, &b);
      break;
    case 2:
      //subtração
      break;
    case 3:
      // Multiplicação
      break;
    case 4:
      divisao(a,b);
      break;
    case 5:
      exponenciacao(a,b);
      break;
    case 6:
      calcularRaizQuadrada(a);
      break;
    case 7:
      fatorial(a);
      break;
    case 0:
      printf("Saindo...");
      break;
    default:
      printf("Opção inválida!\n");
      break;
    }
  } while(!escolha);
  return 0;
}
