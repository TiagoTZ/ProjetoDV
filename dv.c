#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   
setlocale(LC_ALL, "Portuguese");

    char n[10];
    int peso[4] = {5, 4, 3, 2};
    int num, i, tam, agencia[4], soma = 0;

    printf("Digite o numero da agencia: ");
    scanf(" %s", n);

    tam = strlen(n);

    for(i = 0; i < tam; i++){
        agencia[i] = n[i] - '0';
    }

    for(i = 0; i < 4; i++){
            soma += (agencia[i] * peso[i]);
    }

        soma = soma % 11;
        printf("O NUMERO É = %d", 11 - soma);

    return 0;
    }
    