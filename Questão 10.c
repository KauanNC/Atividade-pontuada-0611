#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i1, i2, resultado;
  char opcao;
  
  
  printf("Operações matematicas disponíveis:\n");
  printf ("'+': Adição \t '-':Subtração \n");

  printf("Informe o primeiro valor:");
  scanf("%d", &i1);
  printf ("Informe o segundo valor:");
  scanf ("%d",&i2);
  printf ("informe a operação matemática desejada:");
  scanf("%s",&opcao);
  
if (opcao == '+') {
    resultado = i1 + i2;
  } else if (opcao == '-'){
    resultado = i1 -i2;
  } else if (opcao != '+' || opcao != '-'){
    printf ("A operação escolhida é inválida ");
  
system ("cls || clear");
  
printf ("operação selecionada: %c\n", opcao);
  printf (" Resultado: %d \n", resultado);
  }
  return 0;
  
  
  return 0;
}