#include <stdio.h>

int main(){

    double largura, comprimento, valorMetro, area, valorTerreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMetro);

    area = largura * comprimento;
    valorTerreno = area * valorMetro;

    printf("Area do terreno = %.2lf \n", area);
    printf("Preco do terreno = %.2lf \n", valorTerreno);

    return 0;
}
