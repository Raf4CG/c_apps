#include <stdio.h>

int main() {
    float n1,n2,n3,media;
    
    printf("---- Programa de média ---- \n\n");
    printf("Digite a primeira nota \n");
    scanf("%f",&n1);
    
    printf("Digite a segunda nota \n");
    scanf("%f",&n2);
    
    printf("Digite a terceira nota \n");
    scanf("%f",&n3);
    
    media = (n1 + n2 + n3)/3;
    
    printf("A média do aluno é %.2f",media);
    
    return 0;
}