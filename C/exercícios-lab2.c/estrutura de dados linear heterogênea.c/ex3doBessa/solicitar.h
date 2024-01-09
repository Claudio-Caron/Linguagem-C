void solicitar(banda esc[], int y)
{
    int i;
    do
    {
        printf("escolha o ranking banda para a pesquisa: \n");
        scanf("%d", &y);
        if (y < 0 || y > 5)
        {
            system("cls");
            printf("Pesquise uma classificacao de banda de 1 a 5 \n");
        }
    } while (y < 0 || y > 5);
    for (i=0; i<5; i++){
        if (esc[i].classif==y)
            break;
    }
    system ("cls");
    printf("banda : %s \n", esc[i].nome);
    printf("Genero: %s \n", esc[i].genero);
    printf("N° de integrantes : %d", esc[i].integrantes);
    printf("Classificacão : %d\n\n\n", esc[i].classif);
}
