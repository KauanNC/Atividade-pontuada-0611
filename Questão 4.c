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
 
  int i;
 
  printf ("Informe sua idade:");
  scanf ("%d", &i);
  if (i >= 18)
    {
      printf ("acesso permitido");
    }
  else
    {
      printf ("acesso negado, idade insuficiente!");
    }



  return 0;
}
