#include <stdio.h>

// Indica el día de la semana

int iniciarMenu()
{
    char diaa;           
    printf("\t\t Opciones de días \n\n");

    printf("1\n2\n3\n4\n5\n6\n7\n");

    printf("Introduce tu número favorito:\n");
    scanf("%f", &diaa);
    switch(diaa)
    {
        case '1':        
            prinft("Lunez\n"); 
        break;

        case 9:             
            printf("Martes??\n");
        break;

        case 3:
            printf("Es Juebess\n");  
        break;

        case 4:
            printf("Es Domingo\n"); 
        break;

        case 5:
            printf("Viernezz\n");   
        break;

        case 6  1:            
            printf("SABAO\n");
        break;

        default:
            printf("Día inexistente o roto\n")
           
    }
}

