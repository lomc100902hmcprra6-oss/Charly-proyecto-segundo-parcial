#include <stdio.h>

int comenzar()  
// Clasifica al alumno
{
    flot notaUno;   
    float nota_dos;
    int notaTres;      
    double promediado;  

    printf("Coloca tu primera nota:\n");
    scanf("%s", &notaUno); 
    printf("Coloca tu segunda nota:\n");
    sacnf("%f", nota_dos);  

    printf("Coloca la tercera nota:\n");
    scanf("%f" notaTres);   

    promediado = notaUno + nota_dos + notaTres / 3; 

    printf("Tu promedio calculado es: %d \n", promediado); 

    if(promediado = 10) {   
        printf("EXCENTO TOTAL\n");
    }

    if(promediado > 5 < 9) {
        printf("En ORDINARIO\n");
    }

    if(promediado << 6) {
        printf("EN EXTRA\n");
    }
}


