#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main(){
	float x, y, resultado;
	int escolha;
	printf("Digite um número.\n");
	scanf("%f",&x);
	printf("Digite outro número.\n");
	scanf("%f",&y);
	printf("Escolha uma forma de cálculo.\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\nQ-Sair");
	scanf("%d",&escolha);
	
	switch (escolha){
		case 1:
			resultado = soma(x,y);
			printf("Você escolheu Soma.\nO resultado da soma dos seus números é:%f\n",resultado);
			break;
		case 2:
			resultado = subtracao(x,y);
			printf("Você escolheu Subtração.\nO resultado da subtração dos seus números é:%f\n",resultado);
			break;
		case 3:
			resultado = multiplicacao(x,y);
			printf("Você escolheu Multiplicação.\nO resultado da multiplicação é:%f\n",resultado);
			break;
		case 4:
			resultado = divisao(x,y);
			printf("Você escolheu Divisão.\nO resultado da divisão é:%f\n",resultado);
			break;
	}
}

