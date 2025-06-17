#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main(){
	float x, y, resultado;
	int escolha;
	char escolha2;
	printf("Digite um número.\n");
	scanf("%f",&x);
	printf("Digite outro número.\n");
	scanf("%f",&y);
	printf("Escolha uma forma de cálculo.\nA-Soma\nS-Subtração\nM-Multiplicação\nD-Divisão\nQ-Sair\n");
	scanf("%d",&escolha);
	scanf("%c",&escolha2);

	switch (escolha, escolha2){
		case 'A':
			resultado = soma(x,y);
			printf("Você escolheu Soma.\nO resultado da soma dos seus números é:%f\n",resultado);
			break;
		case 'S':
			resultado = subtracao(x,y);
			printf("Você escolheu Subtração.\nO resultado da subtração dos seus números é:%f\n",resultado);
			break;
		case 'M':
			resultado = multiplicacao(x,y);
			printf("Você escolheu Multiplicação.\nO resultado da multiplicação é:%f\n",resultado);
			break;
		case 'D':
			resultado = divisao(x,y);
			printf("Você escolheu Divisão.\nO resultado da divisão é:%f\n",resultado);
			break;
		case 'Q':
			printf("Você escolheu Sair.\n");
			break;
		default:
			printf("Opção invalida.\n");
			break;
	}
}

