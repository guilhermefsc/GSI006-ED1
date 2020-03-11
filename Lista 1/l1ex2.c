#include <stdio.h>

int tempc;
int tempf;

int main(){
	printf("<<Conversor de temperatura>>\n");
    printf("Digite a temperatura (em Celsius): ");
    scanf("%d",&tempc);
    tempf = tempc*9/5 + 32;
    printf("%d graus Celsius correspondem a %d Fahrenheit.", tempc, tempf);
}