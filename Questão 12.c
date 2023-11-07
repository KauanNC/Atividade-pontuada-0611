#include <stdio.h>
#include <locale.h>

int main() {
 setlocale (LC_ALL, "portuguese");
  
int quantidade, i;
float nota, soma = 0, media;

printf("Digite quantas notas sero inseridas: ");
scanf("%d", &quantidade);

for (i = 0; i < quantidade; i++) {
printf("Digite a %d° nota: \n", i + 1);
  scanf("%f", &nota);
  soma += nota;
    }
media = soma / quantidade;
printf("Média das notas: %.1f\n", media);

    return 0;
}
