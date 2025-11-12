#include<stdio.h>
//Te dice si un numero es mayor o igual a 0//
main()
{
    float Numero;

    printf("Ingresa un numero \n");
    scanf("%f", &Numero);

    if(Numero<0)
    {
        printf("El numero es menor a 0 \n");
    }
    else
    {
        printf("El numero es mayor a 0 \n");
    }
}

