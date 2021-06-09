# include <stdio.h>
# include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    float MA, ACM, MAT; // Media anual, acumulador, media anual da turma
    int CON; // contador
    CON = 0;
    ACM = 0; 

    while(CON < 50) {
        printf("Digite a media anual: ");
        scanf("%f", &MA);

        ACM = ACM + MA;
        CON = CON + 1;
    }

    MAT = ACM / 50;
    
    printf("Media anual da turma = %f", MAT);

}