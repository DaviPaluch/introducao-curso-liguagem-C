#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char Bib = '\a'; /*Constante declara que a variável não será mudada em todo o programa*/
    const double pi = 3.141592;/*Declaração de constante*/
    double raio,area;

    printf("\n Digite o raio da esfera: ");
    scanf("%lf",&raio);

    area = 4.0 * pi * raio * raio;

    printf("%c%c",Bib,Bib);
    printf("\n Area da esfera = %.2lf\n", area);
    
    system("PAUSE");
    return 0;
}
