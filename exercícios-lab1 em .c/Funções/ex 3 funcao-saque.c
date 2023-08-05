/*3.Faça uma solução usando modularidade para automatizar um sistema 
bancário de um caixa eletrônico. O menu a seguir deve ser exibido ao 
usuário enquanto a opção informada por ele seja diferente de SAIR: 
1.SALDO 2.SAQUE 3.PAGAMENTO 4.DEPOSITO 0.SAIR
Para cada opção, mostre o saldo no início, e informe ao usuário se a 
operação escolhida foi realizada com sucesso ou não.
Considere saldo inicial igual $1500*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
// um modulo para cada opção, de maneira análoga ao exercício anterior(um switch com funções em cada caso). 
