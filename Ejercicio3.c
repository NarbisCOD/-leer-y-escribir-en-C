#include <stdio.h>

const int TOTAL_ESTUD = 15;

int main(){
 	 int estud_presentes = 0;
   int total_ausentes = 0;



   printf("Ingrese el total de Estudiantes que asistieron a clases hoy:\n");
	 scanf("%i", &estud_presentes);
	 total_ausentes = TOTAL_ESTUD - estud_presentes;
	 printf("El total de Alumnos Ausentes fue: %i", total_ausentes);

	return 0;
}
