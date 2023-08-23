#include <stdio.h>

int main() {
    int cont,num,maior;
    
    maior = 0;

 printf("--------- App que lê 5 números e mostra o maior --------\n\n");
 
 for (cont=1;cont<6;cont++){
     printf("Digite um número\n");
     scanf("%d",&num);
     if (num > maior) {
         maior = num;
     }

     printf("O maior valor é %d",maior);
    }
 }

