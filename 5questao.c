# include <stdio.h>
# include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    float MA, ACM, MAT; // Media anual, Acumulador, Média anual da turma
    int CON; // Contador
   
    CON = 0; 
    ACM = 0;

    do
    {
        printf("Digite a media anual de um aluno: ");
        scanf("%f", &MA);
        
        ACM = ACM + MA;
        CON += 1;

    } while (CON <= 2); // teste de condição
    
    MAT = ACM / 3;

    printf("Media anual da turma = %f", MAT);

    return 0;

}