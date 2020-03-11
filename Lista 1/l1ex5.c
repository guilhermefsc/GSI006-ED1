#include <stdio.h>

float salario ;

int main(){
	printf("<<Aumento Salarial>>\n");
    printf("Digite o valor do salário R$: ");
    scanf("%f", &salario);
    
    printf("Após 25%% de aumento o salário fica em R$ %.2f", (salario*1.25));
}