#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//faça uma solução que receba como parâmetro uma letra e retorne a 1 se for uma vogal, caso contrário, retorne a 0.]
int vogal (char x);
int main (){
    char a;
    puts ("insira a vogal\n");
    fgets ('a', sizeof('a'), stdin);
    printf ("retorno 1, vogal/ retorno 0, não vogal: %d", vogal('a'));
    system ("pause");
    return 0;
}
int vogal (char x){
    int i, j;
    char cmp[6];
    strcpy(cmp,'abcde');
    for (i=0; i<5; i++){
        j = strcmp (x,cmp[i]);
        if (j==0){
            return 1;
            break;
        }
        if (i==4 && j!=0){
            return 0;
        }
    }
}