/*
 * functions.c
 *
 *  Created on: Jan 16, 2022
 *      Author: cesar
 */
#include <stdio.h>
/*
 * functions.c
 *
 *  Created on: Jan 16, 2022
 *      Author: cesar
 */
#include <stdio.h>

int validar(){
    int num;
    printf("introdueix un nombre");
    scanf("%d", &num);
    return num;
}
int calendaritzar(int divisor, int num ){
    int segons;
    segons=num%divisor;
    return segons;
}
int restar(int divisor, int num ){
    int resta;
    resta=num/divisor;
    return resta;
}
