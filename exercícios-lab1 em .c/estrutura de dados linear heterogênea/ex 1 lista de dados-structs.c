#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//solicitar um formulário com N pessoas, solicitando nome, peso, altura, idade e sexo. Mostrar os dados digitados
#define N 2

//O valor de N define a quantidade de pessoas que será solicitado o formulário
struct tipo_pessoa {
    int idade;
    float altura;
    float peso;
    char nome[50];
    char sexo;
};
typedef struct tipo_pessoa tipo_pessoa;
int main (){
    setlocale (LC_ALL, "Portuguese");
    tipo_pessoa form[N];
    int i;
    //int x;
    puts ("\t\t\t\t\t-----------Formulário pessoal----------\n\n");
    for (i=0; i<N; i++){
        printf ("\tDados da pessoa (%i)\n------------------------------------\n", i);
        puts ("nome : ");
        fgets (form[i].nome, 50, stdin);
        do{
        puts ("Sexo: (M ou F)");
        scanf ("%c", &form[i].sexo);
        fflush (stdin);
        if (form[i].sexo!='f' && form[i].sexo!='F' && form[i].sexo!='m' && form[i].sexo!='M'){
            printf ("dado inserido: %c\n", form[i].sexo);
            puts ("insira novamente, dessa vez, opte somente feminino ou masculino, f ou m");   
        }
        }while (form[i].sexo!='f' && form[i].sexo!='F' && form[i].sexo!='m' && form[i].sexo!='M');
        form[i].sexo = toupper(form[i].sexo);
        puts ("Idade:  ");
        scanf ("%d", &form[i].idade);
        fflush (stdin);

        puts ("Altura em cm: ");
        scanf ("%f", &form[i].altura);
        fflush (stdin);

        puts ("Peso em KG: ");
        scanf ("%f", &form[i].peso);
        fflush (stdin);
        system ("cls");
        /*printf ("Para continuar, insira 1, para preencher novamente os dados da pessoa anterior, 2\n");
        scanf ("%i", &x);
        switch (x){
            case 1:
                continue;
            case 2:
                printf ("Opção escoçhida : 2\nSolicitando novamente os dados da pessoa %i:\n", i+1);
                strcpy (form[i].nome, "");
                strcpy (form[i].sexo, "");
                i--;
                i--;
                continue;
            default:
                printf ("Insira uma opção correta, apenas 1 ou 2\n");
                printf ("Para continuar, insira 1, para preencher novamente os dados da pessoa, 2\n");
                scanf ("%i", &x);
                // nao deu certo para solicitar novamente
        }
        i--;*/
    }
    puts ("---------dados inseridos das respectivas pessoas---------\n");
    for (i=0; i<N; i++){
        printf ("-------Preenchimento da pessoa %i-------\n", i+1);
        puts ("_______________________________________");
        printf ("\tNome  : %s\n\tIdade : %d anos\n\tAltura: %.2f Metros\n", form[i].nome, form[i].idade, form[i].altura/100);
        printf ("\tPeso  : %.2f KG\n\tSexo  : %c\n\n", form[i].peso, form[i].sexo);
        puts ("\n");
    }
    system ("pause");
    return 0;

}