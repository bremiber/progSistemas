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
	int i=0;
	int resta=0;
	int desp=0;
	while(a[i]!='\0'){
		if((a[i]>='A') && (a[i]<='Z')){
			resta='Z'-a[i];
			if(b>resta){
				desp=b-resta-1;
				a[i]='A'+desp;
			}
			else{
				a[i]=a[i]+b;
			}
		}
		else if((a[i]>='a') && (a[i]<='z')){
			resta='z'-a[i];
			if(b>resta){
				desp=b-resta-1;
				a[i]='a'+desp;
			}
			else{
				a[i]=a[i]+b;
			}
		}
		i++;
	}
	printf("\nMensaje cifrado: %s\n",a);
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
