#include <stdio.h>
#include <stdlib.h>

/*
int main (){
    int car, valorp, valorv, ano, pag, valor;
    printf ("qual o ano de fabricacao do veiculo?\n");
    scanf ("%d", &ano);
    printf ("qual o valor do carro?\n");
    scanf ("%d", &valor);
    if (ano>2000 && ano<=2004 && valor>25000 && valor<35000){
        valorv=valor-(valor/10);
        valorp=valor-(valor*3/100);
    }
    if (ano>2000 && ano<=2004 && valor>35000 && valor<100000){
        valorv=valor-(valor*3/100);
        valorp=valor-(valor*3/100);
    }
    if (ano<2000){
        valorv=valor-(valor*15/100);
        valorp=valor-(valor*15/100);
    }


    printf ("como deseja fazer o pagamento, para pagar a vista, digite 1, para a prazo, 2\n");
    scanf ("%d", &pag);
    switch (pag){
    case 1:
        printf ("o valor total da compra sem desconto e :%d RS\n", valor);
        printf ("o valor total da compra sem desconto e :%d RS\n", valorv);
        break;
    case 2:
        printf ("o valor total da compra sem desconto e :%d RS\n", valor);
        printf ("o valor total da compra sem desconto e :%d RS\n", valorp);
    break;
    default :
        printf ("numero do pagamento nao reconhecido\n");
        break;
    }
    system ("pause");
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

/*exercicio 3*/
    #include <stdio.h>
    #include <stdlib.h>
    int main (){
    int m, n, soma=0, i, mod5, mod3;
    int cont3, cont5;
    do {
        printf ("digite  primeiro valor\n");
        scanf ("%d", &m);
        printf ("digite um numero maior ou igual ao anterior\n");
        scanf ("%d", &n);
        if (m<0 || n<0){
            printf ("insira valores positivos\n");
        }
    }while (n<0 && m<0);
    for (i=m, cont3=0, cont5=0; m<=n; i++){
        mod3=i%3;
        mod5=i%5;
        if (mod3==0){
            cont3++;
        }
        if (mod5==0){
            cont5++;
            soma=soma+i;
        }
        printf ("no intervalo entre o primeiro e o segundo numero, foram encontrados %d divisores de 3\n A soma dos dividores de 5 encontrados e:%d\n", cont3, soma);
    }
    system ("pause");
    return 0;
}

