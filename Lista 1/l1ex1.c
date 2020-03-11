#include <stdio.h>
float numero;
float quadrado;

int main(){
    printf("<<Cálculo do Quadrado de n>>\n");
    printf("Digite um número: ");
    scanf("%f",&numero);
    quadrado = numero*numero;
    printf("O valor de %.2f ao quadrado é %.2f.", numero, quadrado);
}