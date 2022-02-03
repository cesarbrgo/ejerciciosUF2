/*
 * main.c
 *
 *  Created on: Jan 13, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"


void main(){
   int i=1, cont=0;
   int arrai[100];
   do{
       if(i%2==0){
            arrai[cont]=i;
            cont=cont+1;
            i=i+1;
       }
       else{
            i=i+1;
       }
   }while(cont<100);

   i=0;
    do{
       printf(" %d, ", arrai[i]);
       i=i+1;
   }while(i<100);
}
