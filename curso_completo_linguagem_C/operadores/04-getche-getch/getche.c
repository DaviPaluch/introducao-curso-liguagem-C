#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

    char ch;
    printf("\nPressione uma tecla: ");
    ch = getche();
    printf("A tecla sucessora ASCII é: %C", ch);

    system("PAUSE");
    return 0;
}
