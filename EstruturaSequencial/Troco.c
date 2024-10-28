#include <stdio.h>

int main(){

    double preco, dinheiro, troco, valor;
    int quant;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    valor = preco * quant;
    troco = dinheiro - valor;

    printf("Troco = %.2lf", troco);

    return 0;
}
