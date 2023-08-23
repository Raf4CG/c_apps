#include <stdio.h>

//Função que calcula o dobro
int dobro(num) {
    return num * 2;
}
//Fim da função    
    
int main() {
    int numero;

 printf("--------- Programa com função --------\n\n");
     printf("Digite um número\n");
     scanf("%d",&numero);
     
    
    printf("O dobro do valor é %d",dobro(numero));
}