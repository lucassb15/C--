#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	int n, qpar=0, qimpar=0, totpar=0;
	
	do{
		printf("Numero: ");
		scanf("%i",&n);
			if(n%2==0 && n!=0){
				qpar++;
				totpar+=n; // totalização dos numeros pares
			}
			if(n%2==1){
				qimpar++;
			}
	}while(n!=0);
	printf("\nQtde. pares: %i\n",qpar);
	printf("\nQtde. impar: %i\n",qimpar);
	printf("Média dos pares: %.2f\n",(float)totpar/qpar);

system("Pause");
}

// \n
// ||

