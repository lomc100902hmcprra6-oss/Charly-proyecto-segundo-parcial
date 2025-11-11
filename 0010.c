#include<stdio.h>
main()
//te dice la marca, año y modelo//
{
    int Modelo;
    int Marca;
    int Ano;
    int Coche;
    printf("Ingresa la marca de tu automovil \n");
    scanf("%d", &Marca);

    printf("Ingresa el modelo \n");
    scanf("%d", &Modelo);

    printf("Ingresa el ano \n");
    scanf("%d", &Ano);

    Coche = Marca+Modelo+Ano;
    printf("Tu coche es: %d", Coche);
}

