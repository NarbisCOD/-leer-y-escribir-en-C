#include <stdio.h>

const int ANIO_MESES=12;

int main(){

 char mascota [20];
 char marca_bolsa[20];
 float  peso_bolsa = -1.0F;
 int  costo_bolsa = -1;
 int cantidad_mascotas = -1;


 printf("Ingrese que mascota tiene:Perro o Gatos:\n");
 scanf("%s", mascota);
 printf("Ingrese la cantidad de mascotas tienes:\n");
 scanf("%i", &cantidad_mascotas);
 printf("Ingrese la marca de alimentos que compra regularmente compra:\n");
 scanf("%s", marca_bolsa);
 printf("Ingrese el peso de la bolsa que compra regularmente compra:\n");
 scanf("%f", &peso_bolsa);
 printf("Ingrese el costo la bolsa que compra regularmente compra:\n");
 scanf("%i", &costo_bolsa);


 printf("Para tu(s):%i%s, gastas un total de:%i pesos anuales, si compras una bolsa marca:%s de peso:%fkg", cantidad_mascotas, mascota,  costo_bolsa*ANIO_MESES, marca_bolsa, peso_bolsa);




  return 0;
}
