#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	float nota=1, cont=1, tot=0;
	while(cont!=0){
		printf("Nota %.f:", cont);
		scanf("%f",&nota);
		tot+=nota;
		cont++;
		if(nota==0){
			break;
		}
	}
 	printf("\nSoma das notas: %.2f", tot);
 	printf("\nMedia das notas: %.2f\n",tot/(cont-2));



system("Pause");
}

// \n
// ||

