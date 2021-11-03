#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
#include<time.h>
main() {
	
	srand(time(NULL));
int c=1, n, ma, me, total=0;
while(c<=500){
n=rand()%200+1; // aleatórios 1 a 5
printf("Valor %i: %i\n",c,n);
//scanf("%i",&n);
total+=n;
if(c==1){
ma=n;
me=n;
}
if(n>ma)
ma=n;
if(n<me)
me=n;
c++;
}
printf("\nMaior valor: %i\n",ma);
printf("Menor valor: %i\n",me);
printf("Media: %.2f\n",(float)total/--c);


system("Pause");
}

// \n
// ||

