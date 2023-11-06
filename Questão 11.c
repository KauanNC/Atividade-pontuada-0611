#include <stdio.h>

int main() {
 int numero, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

for (i = numero; i >= 0; i--) {

  switch (i) {

  case 0:               printf("Zero\n");
break;
case 1:                   printf("Um\n");
  break;
case 2:                printf("Dois\n");
break;
    case 3:
    printf ("Três\n");
    break;
    case 4:
 printf ("Quatro\n");
    break;
    case 5:
    printf ("Cinco\n");
    break;
    case 6:
    printf ("seis\n");
    break;
    case 7:
    printf ("Sete\n");
    break;
    case 8:
    printf ("Oito\n");
    break;
    case 9:
    printf ("nove\n");
    break;
    case 10:
    printf ("Dez\n");
    break;
 default:         
 printf("Número desconhecido\n");
break;
 }
}
return 0;
 }