#include <stdio.h>
int main(){
int i,Usuario,bandera;
float usuarios;

bandera=1;
while(bandera!=0){
	printf("\n Ingrese numero de usuarios a registrar: "); 
	printf("\n Si ingresa un decimal, se tomara la parte entera "); 
 	scanf("%f",&usuarios);
 	Usuario=usuarios;
 	if(usuarios>0){
 		bandera=0;
		 }
	else{
	printf("\n El numero que ingreso es cero o menor, vuelva a intenarlo");
	bandera=1;
	}
}

float Dinero[Usuario],aux,Mayor,Menor;
int Cuenta[Usuario];

for(i=0;i<Usuario;i++){
	printf("\n Ingrese el numero de cuenta: ");
	printf("\n Ejemplo 678123 ");
 	scanf("%i",&Cuenta[i]);
	printf("\n Ingrese la cantidad de dinero: ");
 	scanf("%f",&Dinero[i]);}
	
	for(i=0;i<Usuario;i++){
		printf("\n Numero de Cuenta: %i", Cuenta[i]);
		printf("\n Dinero: %f", Dinero[i]);
	}
	
	Mayor=Dinero[0];
	Menor=Dinero[0];
	
	for(i=0;i<Usuario;i++){
		aux=Dinero[i];
		if(aux>Mayor){
			Mayor=Dinero[i];
		}
		if(aux<Menor){
			Menor=Dinero[i];
		}
	}
	
	for(i=0;i<Usuario;i++){
		aux=Dinero[i];
		if(aux==Mayor){
			printf("\n La Cuenta con Mayor Dinero es: %i", Cuenta[i]);
			printf("\n Con un saldo de: %f pesos", Dinero[i]);	
		}
		if(aux==Menor){
			printf("\n La Cuenta de Menor Dinero es: %i", Cuenta[i]);
			printf("\n Con un saldo de: %f pesos", Dinero[i]);
		}
	}
	
return 0;
}
