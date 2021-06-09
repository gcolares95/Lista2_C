# include <stdio.h>
# include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float MA, ACM, MAT; // Média anual de um dado aluno
  int V; // variavel de controle
  
  ACM = 0;

  for(V=0; V<50; V++)
  {
    printf("Digite a media anual do aluno: ");
    scanf("%f", &MA);

    ACM += MA;
  }

  MAT = ACM / 50;
  
  printf("A média anual da turma é: %f", MAT);



}