/*
 ============================================================================
 Name        : Ejercicio2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	int par;
	int impar;
	setbuf(stdout,NULL);
	printf("Ingrese un numero: ");
	scanf("%d", &num);

	if(num % 2 == 0){
		num = par;
	}else {
		num = impar;
	};
	return EXIT_SUCCESS;
}
