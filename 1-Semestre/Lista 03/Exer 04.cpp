#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
int n, totneg=0;
do{
printf("Valor: ");
scanf("%i",&n);
if(n<0){
totneg+=n;
}
}while(n!=0);
printf("\nTotalizacao dos negativos: %i\n",totneg);


system("Pause");
}

// \n
// ||

