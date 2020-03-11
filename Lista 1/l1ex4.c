#include <stdio.h>

int n1, n2, n3, n4, media;

int main(){
	printf("<<Média aritmética>>\n");

    printf("Digite a 1ª nota: ");
    scanf("%d", &n1);

    printf("Digite a 2ª nota: ");
    scanf("%d", &n2);

    printf("Digite a 3ª nota: ");
    scanf("%d", &n3);

    printf("Digite a 4ª nota: ");
    scanf("%d", &n4);

    printf("===== Notas =====\n");
    printf("Nota 1: %d; Nota 2: %d; Nota 3: %d; Nota 4: %d.\n", n1,n2,n3,n4);
    
    media = (n1+n2+n3+n4)/4;
    printf("Média: %d.", media);
}