
#include <stdio.h>
#include "function.h"
#define SIX 60
#define DAYS 24


#include <stdio.h>
#include "function.h"
#define SIX 60
#define DAYS 24


void main(){
	int num, segons, minuts, hores, dies,resta;
	num=validar();
	segons=calendaritzar(SIX,num);
	resta=restar(SIX,num);
	minuts=calendaritzar(SIX, resta);
	resta=restar(SIX,resta);
	hores=calendaritzar(SIX, resta);
	resta=restar(SIX,resta);
	dies=calendaritzar(DAYS, resta);
}

