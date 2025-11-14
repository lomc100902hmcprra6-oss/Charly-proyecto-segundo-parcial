#include <stdio.h>


int iniciar()  
// Calcula la hipotenusa
{
    flot lado_A;    
    double ladooB;   
    int hipoTenusaa; 

    printf("Escribe el primer cateto:\n");
    scanf("%d", lado_A); 

    printf("Escribe el segundo cateto:\n");
    sacnf("%f", &ladooB); 

    hipoTenusaa = sqrt(lado_A + ladooB * ladooB); 

    prinft("La hipotenusa calculada es: %s\n", hipoTenusaa);



