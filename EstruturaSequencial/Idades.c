#include <stdio.h>
#include <string.h>

int main(){

    char nome1[20], nome2[20];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    fgets(nome1, 20, stdin);
    strtok(nome1, "\n");
    printf("Idade: ");
    scanf("%d", &idade1);
    getchar();

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    fgets(nome2, 20, stdin);
    strtok(nome2, "\n");
    printf("Idade: ");
    scanf("%d", &idade2);
    getchar();

    media = (idade1 + idade2) / 2.0;
    printf("A idade media de %s e %s e de %.1lf anos", nome1, nome2, media);

    return 0;
}
