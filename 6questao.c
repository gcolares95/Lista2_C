# include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int NUM, CHUTE, TENT;

    TENT = 0;

    printf("Digite o número inicial: ");
    scanf("%d", &NUM);

    do {
        printf("Digite os chutes: ");
        scanf("%d", &CHUTE);

        TENT = TENT + 1;

        if(CHUTE > NUM) {
            printf("Chutou alto!\n");
        }
        else if(CHUTE < NUM) {
            printf("Chutou baixo!\n");
        }
     
    } while(NUM != CHUTE);

    printf("TENT: %d", TENT);
}