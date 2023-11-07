#include<stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "portuguese");
 int n, i, validade = 0;

 printf("Digite um valor: ");
 scanf("%d", &n);

for (i = 2; i <= n / 2; i++) {
if (n % i == 0) {
validade++;
break;
}
}
 if (validade == 0)
printf("%d é primo\n", n);
 else
printf("%d não é primo\n", n);

 return 0;
}