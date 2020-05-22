#include <stdio.h>

int main(){
    int variable_e = 10;
    float variable_f = 10.5F;
    double variable_d = 10.05;
    char caracter = 'c';

    //Para imprimir por Pantalla
    //printf("Variable entera: %i, variable float %f, variable double: %f,variable caracter: %c"  , variable_e, variable_f, variable_d, caracter);
    //printf("%i, %f, %f, %c", variable_e, variable_f, variable_d, caracter); Sin Mensaje

    //Para recibir información por consola e imprimir
    printf("Ingrese un nuevo valor para la variable entera:\n");
    scanf("%i", &variable_e);
    printf("Ingrese un nuevo valor para la variable float:\n");
    scanf("%f", &variable_f);
    printf("Ingrese un nuevo valor para la variable caracter:\n");
    scanf(" %c", &caracter);

    printf("nuevo valor entero es: %i \n", variable_e);
    printf("nuevo valor float es: %f \n", variable_f);
    printf("nuevo valor char es: %c ", caracter);
    return 0;
}
