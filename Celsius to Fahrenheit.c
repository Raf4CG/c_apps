#include <stdio.h>

int main() {
    float ce,fe;

 printf("--------- Converte graus Celsius para Fahrenheit --------\n\n");
 printf("Digite o grau em Celsius \n");
 scanf("%f",&ce);

 fe = ce * 1.8 + 32;

printf("Resultado em Fahrenheit é %.2f",fe);
    
    return 0;
}