#include <stdio.h>
#include <stdlib.h>

int change(int *a, int b)
{
    int aux;
    aux = *a;
    *a = b;
    b = aux;
    return b;
}
int main()
{
    int vet[10], i, j;
    for (i = 0; i < 10; i++)
    {
        printf("insira o elemento %i do vetor \n", i + 1);
        scanf("%d", &vet[i]);
        system ("cls");
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (vet[i] > vet[j])
                vet[j] = change(&vet[i], vet[j]);
        }
    }
    printf("elementos do vetor ordenados pelo bubble sorte[0(n^2)]\n");
    for (i = 0; i < 10; i++)
    {
        printf ("%i | ", vet[i]);
    }
    printf ("\n");
    system ("pause");
}