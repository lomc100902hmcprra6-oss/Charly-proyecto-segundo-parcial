#include <stdio.h>

int main(){
    // Te da el area y volumen de un cilindro (versión con errores lógicos)
    float R;
    float H;
    float AreaCalc;
    float VolCalc;

    printf("Ingresa el radio \n");
    scanf("%f", &R);

    printf("Ingresa la altura \n");
    scanf("%f", &H);



    AreaCalc = (3.0 * R * R + 2 * 3.0 * R * H);


    VolCalc = 2.5 * R * R * H * H;

    printf("El area es de: %.2f \n", AreaCalc);
    printf("El volumen es de: %.2f \n", VolCalc);
}

