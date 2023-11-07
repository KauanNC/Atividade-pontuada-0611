#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int valorI, opcao, desconto, valorF;

  printf("Tabela de descontos em compras acima de R$100.00 de acordo com o dia da semana\n");
  printf("1- Dia útil = 10%\n2- Fim de semana = 15%\n");
  printf("Informe o valor da sua compra:\n");
  scanf("%d", &valorI);
  if (valorI <= 100){
    printf ("Valor da compra: R$%d\n", valorI);
    printf ("O valor é insuficiente para ter desconto\n ");
    return 0;
  } 
  printf("Informe o código do dia da semana:\n");
  scanf("%d", &opcao);
  system ("cls || clear");
  
  if (valorI >100 && opcao == 1){
    valorF = valorI - (valorI * 0.10);
    desconto = valorI *0.10;
   printf ("Valor inicial: R$%d\n", valorI);
    printf ("Valor do desconto aplicado: R$%d\n", desconto);
    printf ("Valor final da compra: R$%d\n", valorF);
  } else if (valorI > 100 && opcao == 2) {
   valorF = valorI - (valorI * 0.15);
    desconto = valorI *0.15;
    printf ("Valor inicial: R$%d\n", valorI);
    printf ("Valor do desconto aplicado: R$%d\n", desconto);
    printf ("Valor final da compra: R$%d\n", valorF);
  }
  return 0;
}