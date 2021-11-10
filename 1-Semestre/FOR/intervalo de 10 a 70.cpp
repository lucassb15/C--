#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	int c, n, tot=0, qtde=0;
	for (c=1; c<=8; c++){
		printf("%i Numero: ", c);
		scanf("%i",&n);
		if(n>=10 && n<=70){
			tot+=n;
			qtde++;
		}
	}
	printf("\nMedia: %.2f\n",(float)tot/qtde);

// Lê 8 numeros e determina a média entre os valores 10 a 70

system("Pause");
}

// \n
// ||

