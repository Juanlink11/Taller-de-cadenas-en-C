/* Retorna la longitud de una cadena */
#include <stdio.h>
#include <stdlib.h>

int longCadena(char *cad){ // Longitud de una cadena de caracteres
	int n=0;
	while ((cad[n]) != '\0'){
		n++;
	}
	return n;
}

char CopiarCadena (char *s1,char *cad2){  // Copiar una cadena sobre otra 
	int n;
	n= longCadena(s1);
	cad2=(char *) malloc (n+1);
	for (int i=0;i<n;i++){
		cad2[i]=s1[i];
		cad2[i+1]='\0';
	}
	printf("%s\n",cad2);
	return *cad2;

}

/* main */

int main(){
	char cat1[]={'h','o','l','a','\0'}; // Crear una cadena al final hay que poner el caracter \0
	char *c1 = "Hola Mundo";
	char *cat2 ="Holi";
	CopiarCadena(c1,cat2);
}