// um algoritmo onde descobre se um número é um número de armstrong: é um número de n dígitos que é igual a soma de cada um dos seus dígitos elevado a quantidade de dígitos que o número possui.
#include <stdio.h>
#include <math.h>

int main (){
    int numero, originalNumero, resto, resultado = 0, n = 0, i;
    int digitos[10];

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    originalNumero = numero;

    // separar os dígitos colocando numa matriz
    while (originalNumero != 0) {
        digitos[n] = originalNumero % 10;
        originalNumero /= 10;
        n++;
    }

    // elevando cada dígito ao numero de dígitos do número
    for (i = 0; i < n; i++) {
        resultado += pow(digitos[i], n);
    }

    // comparação do resultado final com o original
    if (resultado == numero) {
        printf("%d eh um numero de Armstrong.", numero);
    }
    else {
        printf("%d nao eh um numero de Armstrong.", numero);
    }
    
    return 0;
}