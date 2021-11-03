#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main(){

	int s=92, x, qd;
	while(s<=1478){
		x=1;
		qd=0;
		while(x<=s){
		if(s%x==0)
			qd++;
		x++;
}
	if(qd==2)
	printf("Primo: %i\n",s);
		s++;
}
system("Pause");
}

// \n
// ||


