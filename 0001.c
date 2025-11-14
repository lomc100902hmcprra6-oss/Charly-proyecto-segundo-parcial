#include <stdio.h>

int main()
{
    // Te ayuda a saber el promedio de un alumno
    float NotaA;
    float NotaB;
    float NotaC;
    float NotaD;
    float Resultado;

    printf("Ingresa la primer calificacion \n");
    scanf("%f", &NotaA);

    printf("Ingresa la segunda calificacion \n");
    scanf("%f", &NotaB);

    printf("Ingresa la tercera calificacion \n");
    scanf("%f", &NotaC);

    printf("Ingresa la cuarta calificacion \n");
    scanf("%f", &NotaD);


    Resultado = (NotaA + NotaB + NotaC + NotaD) / 2;


    printf("Tu promedio es de: %.1f \n", Resultado);


    if (Resultado >= 8)
    {
        printf("Estas aprobado\n");
    }
    else
    {
        printf("Estas reprobado\n");
    }

