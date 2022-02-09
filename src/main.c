/*
 * main.c
 *
 *  Created on: Jan 13, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"
#include <time.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int numero, llista[10], size, ini, final, eleccio;
	size=solicitar( MSG);
	ini=solicitar( MSG2);
	final=solicitar(MSG3);
	eleccio=solicitar(MSG4);
	ordenar(eleccio, ini, final, size);

}
