#include <stdio.h>

struct carros{
    char modelo[40];
    char cor[40];
    int ano;
    float valor;
};

    int main() {
    
    struct carros veiculo1;
    
    printf(" ----- Programa de registro de carros ----- \n\n");
    
    printf("Digite o modelo do carro\n");
    scanf("%s",&veiculo1.modelo);
    
    printf("Digite a cor do carro\n");
    scanf("%s",&veiculo1.cor);
    
    printf("Digite o ano do carro\n");
    scanf("%d",&veiculo1.ano);
    
    printf("Digite o valor do carro\n");
    scanf("%F",&veiculo1.valor);
    
    printf("------------------\n");
    printf("O modelo é: %s\n",veiculo1.modelo);
    printf("O modelo é: %s\n",veiculo1.cor);
    printf("O modelo é: %d\n",veiculo1.ano);
    printf("O modelo é: %.2f\n",veiculo1.valor);
    
    
    return 0;
}