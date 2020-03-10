#include <stdio.h>
#include <stdlib.h>

int main(){
	int soma=0,i;
	for(i=1;i<=333;i++){
		soma += 3*i;
	}
	
	for(i=1;i<=199;i++){
		soma += 5*i;
	}
	
	for(i=1;i<=66;i++){
		soma-=15*i;
	}

	printf("%i\n",soma);
}