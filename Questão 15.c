#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
setlocale(LC_ALL, "portuguese");
int opcao;
float milhas, valor, fahrenheit;

while (1) {
printf("Escolha uma opção de conversão: \n");
printf("1. Quilômetros para Milhas \n");
printf("2. Celsius para Fahrenheit \n");
printf("0. Encerrar programa \n");

printf("Digite a opção desejada: ");
scanf("%d", &opcao);

if (opcao == 0) 
{
return 0;
}
switch (opcao) {

case 1:
printf("Digite a distância em quilômetros: ");
scanf("%f", &valor);
  
milhas = valor * 0.621371;
printf("%.2f quilômetros equivale a %.2f milhas.\n", valor, milhas);
return 0;

case 2:
printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &valor);
fahrenheit = (valor * 9 / 5) + 32;
printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", valor, fahrenheit);
return 0;

default:
printf("Opção inválida. Tente novamente.\n");
}
}

printf("Programa finalizado. \n");

    return 0;
}