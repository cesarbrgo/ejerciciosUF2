/*
 * main.c
 *
 *  Created on: Jan 13, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"

void main(){
    int size, min=2,i=0, max=50;
    size=valida( MSG, min, max);
    int arrai[size];
    min=1;
    max=0;
    do{
        arrai[i]=valida(MSG2, min, max);
        i=i+1;
    }while(i<size);
    ordenar(arrai, size);
}

