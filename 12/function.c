/*
 * function.c
 *
 *  Created on: Feb 3, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "function.h"


int valida(char * msg, int min, int max){
    int num;
    if(max!=0){
             do{
                printf("%s", msg);
                scanf("%d",&num);
            }while (num<min|| num>max);
    }
    else{
            do{
                printf("%s", msg);
                scanf("%d",&num);
            }while (num<min);
    }
    return num;
}


void ordenar(int * ordenacio, int size){
    int i, j, auxiliar;
    for (i=0; i<(size-1); i++){
         for (j=i+1; j<(size); j++){
            if(ordenacio[i]<ordenacio[j]){
                auxiliar=ordenacio[j];
                ordenacio[j]=ordenacio[i];
                ordenacio[i]=auxiliar;
                 ///printf("%d", ordenacio[i]);
                 // printf("%d", ordenacio[j]);
            }
         }
    }
     for (i=0; i<(size); i++){
    	 for (i=0; i<(size); i++){
    	     if(i==size-1){
    	        printf("%d. ", ordenacio[i]);
    	     }
    	     else{
    	        printf("%d, ", ordenacio[i]);
    	     }
    	 }
    }
}
