#include <stdio.h>
#include <stdlib.h>


int main()
{
    

    int varint = 2000000000;
    int dez = 10;

    varint = ((double)varint * dez)/dez;
    printf("\nvarint = %d\n",varint);

    system("PAUSE");
    return 0;
}
