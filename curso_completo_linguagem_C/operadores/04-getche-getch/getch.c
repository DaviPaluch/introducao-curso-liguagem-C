#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;
    printf("Pressione uma tecla: ");
    ch = getch(); /*Aguarda uma tecla do teclado*/

    printf("\nA tecla sucessora ACII é: %c.\n", ch + 1);
    system("PAUSE");



    return 0;
}
