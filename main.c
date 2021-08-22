#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //Declaração das variáveis
  float p1, p2, trab, taref, media;
  
  //Entrada de dados
  printf("Digite a nota da P1: ");
  scanf("%f",&p1);
  
  printf("Digite a nota da P2: ");
  scanf("%f",&p2);

  printf("Digite a nota do trabalho: ");
  scanf("%f",&trab);

  printf("Digite a nota de tarefa: ");
  scanf("%f",&taref);
  
  //Processamento
  media = ((p1 * 0.35) + (p2 * 0.35) + (trab * 0.2) + (taref * 0.1));

  
  //Saída
  printf("A média para aprovcao deverar ser igual ou superior a 6 \n");
  printf("Media do aluno = %.1f\n",media);

  if(media >= 6){
    printf("Aluno Aprovado");
  }
  else{
    printf("Aluno Reprovado");
  }
  
  return 0;//retorno da função main 
}