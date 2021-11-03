#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {

	int voto, cand1=0, cand2=0, nulo=0, branco=0, total;
	
	do{
		printf("Voto: ");
		scanf("%i",&voto);
		if(voto==1)
			cand1++;
		if(voto==2)
			cand2++;
		if(voto==3)
			nulo++;
		if(voto==4)
			branco++;
	}while(voto!=0);
	total= cand1+cand2+nulo+branco;
	printf("\n=== RESULTADO ===\n");
	printf("Cand. 1: %.2f%%\n",(float)cand1/total*100);
	printf("Cand. 2: %.2f%%\n",(float)cand2/total*100);
	printf("Nulos : %.2f%%\n",(float)nulo/total*100);
	printf("Brancos : %.2f%%\n",(float)branco/total*100);
	


system("Pause");
}

// \n
// ||

