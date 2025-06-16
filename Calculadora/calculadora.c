#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main(){
	int x, y;
	printf("Digite um número\n");
	scanf("%d",&x);
	printf("Digite outro número\n");
	scanf("%d",&y);
	soma(x,y);
	printf("o resultado é:%d\n",soma);
	

}

