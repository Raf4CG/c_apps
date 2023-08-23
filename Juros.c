#include <stdio.h>

int main() {
  
  float emprestimo,taxa,parcela,juros;
  
  printf("$$$$ --- Programa de juros ---$$$\n\n");
  printf("Digite o valor do empréstimo\n");
  scanf("%f",&emprestimo);
  
  printf("Digite a taxa do empréstimo\n");
  scanf("%f",&taxa);
  
  printf("Digite o número de parcelas\n");
  scanf("%f",&parcela);
  
  juros = (emprestimo * taxa * parcela)/100;
  
  printf("Juros: %.2f",juros);

    return 0;
}