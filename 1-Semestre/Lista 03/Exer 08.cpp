#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	
	int c=1, n, ma, me, total=0;
	
	while(c<=5){
		printf("Valor %i: ",c);
		scanf("%i",&n);
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
	printf("\nMenor valor: %i\n",me);
	printf("\nMedia: %.2f\n",(float)total/--c);

system("Pause");
}

// \n
// ||

