#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
int n, totpar=0, qtdepar=0;
do{
printf("Valor: ");
scanf("%i",&n);
if(n%2==0 && n!=0){
totpar+=n;
qtdepar++;
}
}while(n!=0);
printf("\nMedia pares: %.2f\n",(float)totpar/qtdepar);



system("Pause");
}

// \n
// ||

