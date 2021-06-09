# include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese");

    float n1, n2, n3, n4, MA;  // notas bimestrais e média anual
    int CON;  // contador
    CON = 0;

    while(CON < 50){
        printf("Digite suas 4 notas. Exemplo(9,2 8,1 7,2 6,3): ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
      
        MA = (n1 + n2 + n3 + n4) / 4;

        printf("media atual = %.1f\n", MA);
        if(MA >= 7) {
            printf("Aluno aprovado!\n");
            printf("Parabéns!");
        }
        else {
            printf("Aluno reprovado!\n");
            printf("Estude mais!");
        }
        CON += 1;
    }
}