#include <stdio.h>
#include <stdlib.h>

/*Algumas vezes a conversão automática não gera o resultado que esperamos. Teremos então resultados errados*/

int main()
{
    int varint = 20000000000000;
    int dez = 10;


    varint = (varint * dez)/dez;

    printf("\n varint = %d",varint); /*resposta errada*/

    return 0;
}




