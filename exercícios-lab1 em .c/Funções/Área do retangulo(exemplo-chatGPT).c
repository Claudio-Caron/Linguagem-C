#include <stdio.h>

// Função para calcular a área de um retângulo
float calcularAreaRetangulo(float comprimento, float largura) {
    return comprimento * largura;
}

int main() {
    float comprimento, largura;

    printf("Digite o comprimento do retângulo: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    // Chamando a função para calcular a área
    float area = calcularAreaRetangulo(comprimento, largura);

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}