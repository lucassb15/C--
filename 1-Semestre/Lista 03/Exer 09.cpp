#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	
	char resp, nome[20];
	float larg, comp, area, total=0;
	do{
		printf("\n\nNome do comodo: ");
		scanf(" %s",&nome);
		printf("\nLargura: ");
		scanf("%f",&larg);
		printf("\nComprimento: ");
		scanf("%f",&comp);
		area=larg*comp;
		printf("\nTotal da(o) %s = %.2f mts\n", nome, area);
		total+=area; // total = total + area
		printf("\nDeseja continuar (s/n)? ");
		scanf(" %c",&resp);
	}while(resp=='s' || resp=='S');
	printf("\n\nTOTAL DA RESIDENCIA: %.2f mts\n", total);


system("Pause");
}

// \n
// ||

