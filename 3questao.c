# include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float MA, ACM, MAT; // Media anual, Acumulador, media anual da turma
    int CON;
    
    CON = 0;
    ACM = 0;
    MA = 0;

    while(MA != -1){    // Teste da condição de parada
        printf("Digite a média anual: ");
        scanf("%f", &MA);

        if(MA != -1){       // Evita a acumução do finalizador
            ACM = ACM + MA;
            CON = CON + 1;
        }
    }

    if(CON > 0) {    // houve pelo menos 1 execução
        MAT = ACM / CON;
        printf("Média anual da turma = %.1f", MAT);
    }
    else {
        printf("Nenhuma média válida fornecida");
    }

}