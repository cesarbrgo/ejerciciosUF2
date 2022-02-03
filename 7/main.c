/*
 * main.c
 *
 *  Created on: Jan 13, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"



int main(){
    int size, max, min;
    size=validar();
    int arrai[size];
    omplir(size,arrai);
    max=maxim(size,arrai);
    min=minimum(size,arrai);
    mitjana(size,arrai);
    ordenar(arrai, size);
}
