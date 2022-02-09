/*
 * function.c
 *
 *  Created on: Feb 3, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int solicitar(char * msg){
	int num;
	printf("%s",msg);
	scanf("%d", &num);
	return num;
}

ordenar(eleccio, ini, final,  ){
	int numero, llista[10];
	srand (time(NULL));
	for(int i=0;i<10;i++){
 	  llista[i] = rand()%50+1;
	}
	printf("\n");
	for(int i=0;i<10;i++){
 	  printf("%d ",llista[i]);
	}

}
