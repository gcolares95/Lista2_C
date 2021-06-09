# include <stdio.h>
# include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int N, CON, ACM;
    float MNP;

    CON = 0;
    ACM = 0;
    N = 1;

    while(N > 0) {
        printf("Digite um número: ");
        scanf("%d", &N);
        if((N > 0) && (N % 2 == 0)) {
            ACM = ACM + N;
            CON = CON + 1; 
        }
    }

    if(CON > 0){
        MNP = ACM / CON;
        printf("Média = %f", MNP);
    } else {
        printf("Nenhum par foi fornecido!");   
    }

}