#include <stdio.h>
#include <string.h>

// Definindo a estrutura de dados "Livro"
struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

// Função para exibir os detalhes do livro
void exibirLivro(struct Livro livro) {
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicação: %d\n", livro.anoPublicacao);
}

int main() {
    // Criando uma instância da struct Livro
    struct Livro livro1;

    // Preenchendo os dados do livro1
    strcpy(livro1.titulo, "A Revolução dos Bichos");
    strcpy(livro1.autor, "George Orwell");
    livro1.anoPublicacao = 1945;

    // Exibindo os detalhes do livro1
    printf("Detalhes do livro1:\n");
    exibirLivro(livro1);

    return 0;
}