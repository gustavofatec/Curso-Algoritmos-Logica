#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    char nome1[50];
    char nome2[50];
    int idade1 = 0;
    int idade2 = 0;
    double media = 0;

    printf("Dados da primeira pessoa \n");
    printf("Nome: ");
    ler_texto(nome1,50);
    printf("Idade: ");
    scanf("%d",&idade1);

    printf("\n");

    printf("Dados da primeira pessoa \n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2,50);
    printf("Idade: ");
    scanf("%d",&idade2);

    media = (idade1 + idade2) / 2;

    printf("\n");
    printf("A idade media de %s e %s e de %.1lf anos",nome1,nome2,media);


    return 0;
}
