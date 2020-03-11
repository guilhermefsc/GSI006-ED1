#include <stdio.h>

int numero, ante, suce;

int main(){
	printf("<<Antecessor e Sucessor>>\n");
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	ante = numero - 1;
	suce = numero + 1;
	printf("Antecessor de %d: %d\n", numero, ante);
	printf("Sucessor de %d: %d", numero, suce);
}