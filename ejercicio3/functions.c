/*
 * functions.c
 *
 *  Created on: Jan 16, 2022
 *      Author: cesar
 */
#include <stdio.h>

int validate(){
    int num;
    printf("introdueix un nombre");
    scanf("%d", &num);
    return num;
}
float binaritzar(int num){
    int aux, divisor=1,bin=0;
    aux=num;
    do{
    	bin=bin+((aux%2)*divisor);
    	aux=aux/2;
    	divisor=divisor*10;
    }while(aux!=0);
    /**printf('%f', bin);**/
    return bin;
}








