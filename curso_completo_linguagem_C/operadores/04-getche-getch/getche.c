#include <stdio.h>
#include <stdlib.h>


int main()
{

    char ch;
    printf("\nPressione uma tecla: ");
    ch = getche();
    printf("\nA tecla sucessora ASCII é: %C\n", ch + 1);

    system("PAUSE");
    return 0;
}
