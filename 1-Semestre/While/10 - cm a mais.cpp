#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {

	float chico=1.50, ze=1.10, qtdeanos=0;
	do{
		chico+=0.02;
		ze+=0.03;
		qtdeanos++;
	}while (ze<=chico);
	printf("\nQtde. anos: %.f\n",qtdeanos);

system("Pause");
}

// \n
// ||

