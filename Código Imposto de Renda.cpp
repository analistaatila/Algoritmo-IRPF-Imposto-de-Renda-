#include <stdio.h>

int main(void) {

  // ENTRADA
  printf("Digite o seu salario: ");
  float salario;
  scanf("%f",&salario);

  // PROCESSAMENTO
  float imposto;
  float aliquota;
  
  if(salario <= 1903.98){
    aliquota = 0;
  }else if(salario <=2826.65){
    aliquota = 7.5;
  }else if(salario <= 3751.05){
    aliquota = 15;
  }else if(salario <= 4664.68){
    aliquota = 22.5;
  }else{
    aliquota = 27.5;
  }
  imposto = salario * (aliquota/100.00); 

  // SAIDA
  if(aliquota!=0){
    printf("Voce vai pagar %0.2f de imposto",imposto);
  }else{
    printf("Voce e isento de IRPF");
  }
  return 0;
}