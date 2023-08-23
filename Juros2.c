#include <stdio.h>

float juros(float e, float t, float p) {
    
    return (e * t * p)/100;
}

int main() {
  
  float emprestimo,taxa,parcela;
  
  printf("$$$$ --- Programa de juros ---$$$\n\n");
  printf("Digite o valor do empréstimo\n");
  scanf("%f",&emprestimo);
  
  printf("Digite a taxa do empréstimo\n");
  scanf("%f",&taxa);
  
  printf("Digite o número de parcelas\n");
  scanf("%f",&parcela);
  
  printf("O juros é de: %.2f",juros(emprestimo,taxa,parcela));

    return 0;
}
    
