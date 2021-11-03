#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
	
int c=1, n, qtde=0;
while(c<=5){
printf("Valor %i: ",c);
scanf("%i",&n);
if(n%3==0){
qtde++;// qtde=qtde+1 qtde+=1
}
c++;
}
printf("\nQtde. de divisiveis por 3: %i\n",qtde);


system("Pause");
}

// \n
// ||

