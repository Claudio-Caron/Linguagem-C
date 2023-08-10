#include <stdio.h>
#include <stdlib.h>
/*51. Faça uma solução, usando modularidade, para automatizar parte de um 
sistema escolar. Considere uma única disciplina, 5 alunos e duas notas, para 
efeito de teste. O usuário poderá realizar as seguintes operações:
• Cadastrar notas
O usuário deverá informar todas as notas de todos os alunos
• Mostrar notas
O sistema imprimirá todas as notas de todos os alunos. Se não houver
nota cadastrada, exibir tal mensagem.
• Mostrar estatística
O sistema deverá exibir a média de notas de cada aluno, bem como a 
maior e a menor, dentre as médias. Esta opção é válida se houver nota 
cadastrada.*/
void cadastro (float matriz[2][5]);
//void mostrar (int i, int j, float matriz [i][j]);
//void estatistica ();
void escolha (int k);
int main (){
    int z;
    puts ("SISTEMA DE NOTA\nMatemática");
    puts ("1-Cadastrar notas\n2-mostrar notas\npara encerrar, digite 0");
    scanf ("%d", &z);
    escolha (z);
    system ("pause");
    return 0;
}
void escolha (int k){
    int matrizesc[2][5];
   // int u=2, p=5;
    switch (k){
        case 1:
        cadastro (matrizesc[2][5]);
        break;
    }
}
void cadastro (float matriz[2][5]){
    int i, j;
    for (j=0; j<5; j++){
        for (i=0; i<2; i++){
            printf ("insira a nota %d do aluno %d", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
        }
    }
}
