#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,a,r1=0,r2=0,r3=0,r4=0,r5=0;
for(i=1;i<=10;i++){
	a = rand() % 5;
	if(a == 1){r1++;}
	printf("%i , ",a);
}

printf(" \n %i é o numero que mais se repete",a);
}

