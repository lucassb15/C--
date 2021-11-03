#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main(){

	int s=1, x, sd;
	while(s<=800){
		x=1;
		sd=0;
		while(x<s){
		if(s%x==0)
			sd+=x;
		x++;
}
	if(sd==s)
	printf("Número perfeito: %i\n",sd);
		s++;
}

system("Pause");
}

// \n
// ||


