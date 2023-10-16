/*(d) Crie uma função em C que solicite ao usuário um gênero musical e exiba as bandas
deste gênero em seu ranking. Obs.: Utilize a função strcmp da biblioteca string.h
para comparar duas strings.*/
void genero(banda gen[], int x){
    int i;
    char pesqgen[20];
    x=0;
    printf ("Pesquise por um genero musical de sua preferência:\n");
    fgets (pesqgen, sizeof(pesqgen), stdin);
    printf ("Bandas com esse gênero:");
    for (i=0;i<5;i++){
        pesqgen= tolower (pesqgen);
        gen[i].genero=tolower(gen[i].genero);
        if (strcmp(gen[i].genero, pesqgen==0)){
            printf ("%i : %s\n", i+1, gen[i].genero)
            x=1;
        }
    }
    if (x==0)
        printf ("Nao foram encontradas bandas com esse estilo musical");

}
