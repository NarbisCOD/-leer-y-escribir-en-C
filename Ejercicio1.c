#include <stdio.h>

const int ANIOS_PORHORA = 7;
    
int main(){

    int horas_planeta = 1;

    printf("Escribir la cantidad de horas que paso en el Planeta:\n");
    scanf("%i", &horas_planeta);
    printf("Total de anios Transcurridos: %i", horas_planeta*ANIOS_PORHORA);


    return 0;
}
