#include <stdio.h>

int main(){
	char usuario[20];
	char email[20];

	printf("Ingrese nombre de usuario:\n");
	scanf("%s", usuario);
	printf("Ingrese email:\n");
	scanf("%s", email);
	printf("Email de usuario %s: %s", usuario, email);

	return 0;
}
