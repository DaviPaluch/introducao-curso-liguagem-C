O operador de incremento (++) ou decremento (--) opera sobre o nome de uma variável e adiciona ou subtrai 1
ao valor. Existem duas maneiras de usar esses opedaroes: préfixado e pós-fixado.



x = x + 1 ;

é quivalente a:


    préfixado(antes da variável):
        a = ++x; /*Adiciona 1 a x antes de ser atribuido a "a"*/



    pós-fixado(depois da variável):
        a = x--;  /*Subtrái 1 a x depois de ser atribuido a "a"*/

    
Em C os operadores unários tem precedencia sobre os opedaroes binários:

    x = a * b++;

    é equivalente a:

    x = a * (b++);

        





