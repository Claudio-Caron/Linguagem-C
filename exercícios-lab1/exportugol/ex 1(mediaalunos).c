#include <stdio.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float nalg[5], nlab[5], contalg=0, contlab=0;
    int i;
    /* ler a media de duas turmas de 50 alunos e imprimir a porcentagem de aprovados(deixando as notas armazenadas
    )*/
    for (i=0; i<5; i++){
        printf ("insira a nota do aluno %i da disciplina de algoritmos\n", i+1);
        scanf ("%f", &nalg[i]);
        if (nalg[i]>=6){
            contalg++;
        }
    }
    for (i=0; i<5; i++){
        printf ("insira a nota do aluno %i da disciplina de lab 1\n", i+1);
        scanf ("%f", &nlab[i]);
        if (nlab[i]>=6){
            contlab++;
        }
    }
    contalg = contalg/5*100;
    printf ("%.2f %% dos alunos de algoritmo estao acima da media\n", contalg);
    contlab =contlab/5*100;
    printf ("%.2f %% dos alunos de lab-1 estao acima da media\n", contlab);

    system ("pause");
    return 0;
}
