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
  printf ("Tabela de códigos dos idiomas disponíveis no sistema\n ");
  printf (" 1- Inglês \t2- Espanhol \t3- Francês\n");
  printf ("Informe o código do idioma:");
  scanf ("%s", &i);
  
  switch (i){
      case '1':
        printf ("Hello user!");
         break;
     case '2':
        printf ("Hola usuario!");
        break;
    case '3':
        printf ("Bonjour utilisateur");
    default:
        printf ("Código inválido");
        break;
  }
  return 0;
}