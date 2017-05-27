#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define TAMANIO 1024
void cifrar(char a[TAMANIO], int b);
void validar_entero(char numero[]);

int main(){
	char mensaje[TAMANIO];
	char num[20];
	int llave;
	bool valido=false;

	printf("Cifrado C%cclico\n",161);
	printf("Ingrese mensaje a cifrar: ");
	fgets(mensaje,TAMANIO,stdin);

	do{
		printf("Ingrese la llave num%crica: ",130);
		scanf("%s",num);
		valido=validar_entero(num);
	}while(valido==false);

	llave=atoi(num);

	cifrar(mensaje,llave);
	return 0;
}


void cifrar(char a[TAMANIO], int b){
	printf("cifando....\n");
	return;
}


bool validar_entero(char numero[]){
	int i;
	for(i=0; i<strlen(numero);i++){
		if(!(numero[i]>48 && numero[i]<=57)){
			printf("Ingrese numero....\n");
			return false;
		}
	}
	return true;
}
