#include <stdio.h>

 const float VALOR_MEGAS = 0.125F;

int main() {

  int megas_comprados=0;
  float velocidad_relev=0;


  printf("Ingrese el Paquete comprado en Megas:\n");
  scanf("%i", &megas_comprados);
  velocidad_relev = megas_comprados*VALOR_MEGAS;
  printf("El usuario compro un paquete de: %i Megas y la velocidad relevante en realidad es de %fMB/s", megas_comprados, velocidad_relev);



  return 0;
}
