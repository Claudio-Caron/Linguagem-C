#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um caractere aleatório dentro do conjunto de letras estabelecido
char gerarCaractereAleatorio() {
    // Defina aqui o conjunto de letras permitidas
    char letrasPermitidas[] = "ABCD";

    int tamanhoConjunto = sizeof(letrasPermitidas) - 1;

    // Gerar um índice aleatório dentro do tamanho do conjunto de letras permitidas
    int indiceAleatorio = rand() % tamanhoConjunto;

    // Retornar o caractere correspondente ao índice aleatório
    return letrasPermitidas[indiceAleatorio];
}

int main() {
    // Inicializar a semente do gerador de números aleatórios
    srand(time(NULL));

    // Gerar e imprimir 10 caracteres aleatórios
    for (int i = 0; i < 10; i++) {
        char caractereAleatorio = gerarCaractereAleatorio();
        printf("%c ", caractereAleatorio);
    }

    return 0;
}