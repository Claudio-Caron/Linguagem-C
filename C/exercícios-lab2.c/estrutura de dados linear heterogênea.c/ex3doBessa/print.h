void imprimir(banda mam[], int i)
{
    for (i = 0; i < 5; i++)
    {
        printf("banda : %d\n", i + 1);
        printf("%s \n", mam[i].nome);
        printf("Genero: %s \n", mam[i].genero);
        printf("N° de integrantes : %d", mam[i].integrantes);
        printf("Classificação : %d\n\n\n", mam[i].classif);
        Sleep(5000);
        system("cls");
    }
}