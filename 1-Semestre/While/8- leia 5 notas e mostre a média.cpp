#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	float nota, cont=1, tot=0;
	while(cont<=5){
		printf("Nota %.f:", cont);
		scanf("%f",&nota);
		tot+=nota;
		cont++;
	}
 	printf("\nSoma das notas: %.2f", tot);
 	printf("\nMedia das notas: %.2f\n",tot/--cont);

system("Pause");
}

// \n
// ||

