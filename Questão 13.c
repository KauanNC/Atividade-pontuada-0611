#include <stdio.h>

int main(void) {
  int i1,i2;
  printf("Informe o primeiro valor:");
  scanf ("%d", &i1);
  printf ("Informe o segundo valor:");
  scanf("%d",&i2);

  if (i1>i2) {
    printf ("O primeiro valor é o maior\n", i1);
    printf ("O segundo valor  é o menor\n", i2);
  } else if (i2 > i1) {
    printf ("O segundo valor  é o maior\n", i2);
    printf ("O primeiro valor é o menor\n", i1);
  }
  return 0;
}