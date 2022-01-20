/*
 * functions.c
 *
 *  Created on: Jan 16, 2022
 *      Author: cesar
 */
#include <stdio.h>

int validar(){
	int i=0,num=0;
	do{
	printf("introdueix un numero entre 10 i 5000");
	scanf('%d',&num);
	i=i+1;
	}while(num<10 && num>5000 || i==3);
	return num;
}
