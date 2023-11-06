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
  float nota;
  printf ("Informe a nota do aluno:");
  scanf ("%f", &nota);

  if (nota > 9)
    {
      printf ("Excelente");
    }
  else if (nota >= 7)
    {
    printf ("Bom");
}

else if (nota >= 5)
  {
    printf ("razoavel");
  }
else if (nota < 5)
  {
    printf ("nota insuficiente");
  }

return 0;
}
