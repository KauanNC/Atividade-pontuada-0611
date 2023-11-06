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
  int temp;
  printf ("Informe a temperatura °C:");
  scanf ("%d", &temp);
  if (temp >= 25)
    {
      printf ("clima ensolarado");
    }
  else if (temp <= 15)
    {
      printf ("clima chuvoso");
    }
  else
    {
  printf ("Clima nublado");
    }
  return 0;
}
