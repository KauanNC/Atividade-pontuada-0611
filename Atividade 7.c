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
 
  char opcao;
  char nome [250];
  printf ("Tabela de códigos das opções disponíveis no jogo\n ");
  printf (" 1- Novo jogo \t2- Carregar jogo \t3- configurações\n");
  printf ("Informe o código da opção desejada:");
  scanf ("%s", &opcao);
  
  switch (opcao){
      case '1':
        printf ("Opção escolhida foi: novo jogo\n");
        printf ("Informe o nome do novo jogo:\n");
        scanf ("%s", &nome);
        printf ("Um novo save chamado '%s' foi criado", nome);
         break;
    case '2':
        printf ("Opção escolhida foi: carregar jogo\n");
        printf("Informe o nome do jogo que deseja carregar\n");
        scanf ("%s", &nome);
        printf ("Bem vindo de volta a '%s' jogador", nome);
        break;
    case '3':
        printf ("A opção escolhida foi: configurações");
        printf ("Opões de configurações disponíveis: \nacessibilidade\nInterface\naudio\nsensibilade\n");
        printf ("Informe qual opção você deseja:\n");
        scanf ("%s", &nome);
        printf ("A configuração escolhida foi '%s'", nome);
  }
  return 0;
}