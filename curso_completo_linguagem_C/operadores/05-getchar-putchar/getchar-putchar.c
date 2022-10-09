#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;

    printf("\n Pressione uma tecla: ");
    ch = getchar(); /*Aguarda uma tecla do teclado*/

    printf("A tecla sucessora ACII é: ");

    putchar(ch + 1); /*Imprimindo o caractere*/
    putchar('\n');
    system("PAUSE");
    return 0;
}
