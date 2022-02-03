/*
 * function.c
 *
 *  Created on: Feb 3, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"


int validar(){
    int num;
    do{
        printf("introdueix la dimensio entre 1 i 50: ");
        scanf("%d",&num);
    }while (num<1||num>50);
    return num;
}

int validar2(){
    int num;
    do{
        printf("introdueix el numero entre 1 i 10: ");
        scanf("%d",&num);
    }while (num<1||num>10);
    return num;
}

void omplir(int size, int *arrai){
    int i=0;
    do{
        arrai[i]=validar2();
        i=i+1;
    }while(i<size);
}

int maxim(int size, int *arrai){
     int i=0, max=0;
    do{
       if (arrai[i]>max){
           max=arrai[i];
           i=i+1;
       }
       else{
           i=i+1;
       }
    }while(i<size);
    printf("el numero max es %d \n", max);
}

int minimum(int size, int *arrai){
     int i=0, min=10;
    do{
       if (arrai[i]<min){
           min=arrai[i];
           i=i+1;
       }
       else{
           i=i+1;
       }
    }while(i<size);
    printf("el numero min es %d \n", min);
}


int mitjana(int size, int *arrai){
     int i=0, mitjana=0;
    do{
       mitjana=mitjana+arrai[i];
       i=i+1;
    }while(i<size);
    printf("la mitjana es %d \n", mitjana/size);
}

int ordenar(int * ordenacio, int size){
   int i, j, auxiliar;
   for (i=0; i<(size-1); i++){
       for (j=i+1; j<(size); j++){
        if(ordenacio[i]>ordenacio[j]){
	                  auxiliar=ordenacio[j];
	                  ordenacio[j]=ordenacio[i];
	                  ordenacio[i]=auxiliar;
                }
         }
  }

   for (i=0; i<(size); i++){
	   if(i==size-1){
        printf("%d. ", ordenacio[i]);
	   }
	   else{
		   printf("%d, ", ordenacio[i]);
	   }
      }


}


