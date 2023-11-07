#include <stdio.h>

int main() {
 int numero, contadorPares = 0, contadorImpares = 0;
 int somaPares = 0, somaImpares = 0;

 printf("Digite números inteiros (para encerrar, digite um número negativo):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            return 0; 
        }

        if (numero % 2 == 0) {
            contadorPares++;
            somaPares += numero;
        } else {
            contadorImpares++;
            somaImpares += numero;
        }
    }

    if (contadorPares > 0) {
        float mediaPares = (float) somaPares / contadorPares;
 printf("Números pares: %d (Média: %.2f)\n", contadorPares, mediaPares);
    } else {
        printf("Nenhum número par foi inserido.\n");
    }

    if (contadorImpares > 0) {
        float mediaImpares = (float)somaImpares / contadorImpares;
        printf("Números ímpares: %d (Média: %.2f)\n", contadorImpares, mediaImpares);
    } else {
        printf("Nenhum número ímpar foi inserido.\n");
    }

    return 0;
}
