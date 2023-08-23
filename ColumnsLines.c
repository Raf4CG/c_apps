#include <stdio.h>

int main() {

int numeros[3][3];
int linha,coluna;

 printf("---- Organizador em colunas e linhas ----\n\n");

for (linha = 0; linha <3; linha ++){
  
  for (coluna = 0; coluna <3; coluna ++)  {
      
      printf("Digite o número \n");
      scanf("%d",&numeros[linha][coluna]);
      
  }
    
}

for (linha = 0; linha <3; linha ++){
  
  for (coluna = 0; coluna <3; coluna ++)  {
      
      printf("%d | ",numeros[linha][coluna]);
    
  }
    printf("\n");
}

    return 0;
}