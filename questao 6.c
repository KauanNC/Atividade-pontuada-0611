/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int
main ()
{
  setlocale (LC_ALL, "portuguese");
 
  char i;
  printf ("Tabela de códigos dos produtos disponíveis no sistema\n ");
  printf (" 1- Camiseta \t2- Calça \t3- Sapato\n");
  printf ("Informe o código do produto:");
  scanf ("%s", &i);
  
  switch (i){
      case '1':
        printf ("Produto escolhido foi a camiseta\nSeu preço é: R$20.00");
         break;
     case '2':
        printf ("Produto escolhido foi a calça\nSeu preço é: R$70.00");
        break;
    case '3':
        printf ("Produto escolhido foi o sapato\nSeu preço é: R$60.00");
    default:
        printf ("Código inválido");
        break;
  }
  return 0;
}