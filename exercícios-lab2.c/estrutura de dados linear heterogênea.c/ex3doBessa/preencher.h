void mensagem()
{
    printf("Voce ja classificou outra banda com essa nota\n");
}
void preencher(banda cinco[], int n)
{
    int i, j=0;
    for (n = 0; n < 5; n++)
    {
        printf("insira o nome da banda %i: \n", n + 1);
        fgets(cinco[n].nome, sizeof(cinco[n].nome), stdin);
        printf("insira o genero da banda\n");
        fgets(cinco[n].genero, sizeof(cinco[n].genero), stdin);
        printf("Quantos integrantes a banda possui\n");
        scanf("%d", &cinco[n].integrantes);
        do
        {
            j=0;
            printf("qual a posicao da banda no ranking?\n");
            scanf("%d", &cinco[n].classif);
            if (cinco[n].classif < 0 || cinco[n].classif > 5)
            {
                system("cls");
                printf("Voce inseriu uma posição fora do Top 5!!!\ninsira uma classificação para a banda %s de 0 a 5 lugar\n", cinco[n].nome);
                continue;
            }
            else
            {
                for (i = 0; i < 5; i++)
                {
                    if (i == n)
                    {
                        continue;
                    }
                    else
                    {
                        if (cinco[i].classif == cinco[n].classif)
                        {
                            system("cls");
                            mensagem();
                            j=1;
                            break;
                        }
                    }
                }
            }
            fflush(stdin);
            if (j==1) {
                continue; 
            } 
            system("cls");
        } while (cinco[n].classif < 0 || cinco[n].classif > 5);
    }
}
