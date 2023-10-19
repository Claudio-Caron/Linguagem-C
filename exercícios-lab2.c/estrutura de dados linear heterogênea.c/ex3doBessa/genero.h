/*(d) Crie uma função em C que solicite ao usuário um gênero musical e exiba as bandas
deste gênero em seu ranking. Obs.: Utilize a função strcmp da biblioteca string.h
para comparar duas strings.*/
void genero(banda gen[], int x)
{
    int i, j;
    char pesqgen[20];
    x = 0;
    printf("Pesquise por um genero musical de sua preferência:\n");
    fgets(pesqgen, sizeof(pesqgen), stdin);
    printf("Bandas com esse gênero:");
    pesqgen[strcspn(pesqgen, "\n")] = '\0'; 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < strlen(pesqgen); j++)
        {
            pesqgen[j] = tolower(pesqgen[j]);
            gen[i].genero[j] = toupper(gen[i].genero[j]);
        }

        if (strcmp(gen[i].genero, pesqgen) == 0)
        {
            gen[i].genero[0] = toupper(gen[i].genero[0]);
            printf("%i : %s\n", i + 1, gen[i].genero);
            x = 1;
        }
    }
    if (x == 0)
        printf("Nao foram encontradas bandas com esse estilo musical");
}
