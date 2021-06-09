# include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char TV; // tipo de vinho
    int CONV, CT, CB, CR; // Contador de Vinho, contador de tinto, contador de branco, contador de rosê
    float PT, PB, PR; // Porcentagem de tinto, branco e rosê 

    CONV = 0;
    CT = 0;
    CB = 0;
    CR = 0;

    
    do 
    {  
        scanf("%c", &TV);

        switch(TV)
        {
            case 'T':
            CT = CT + 1;
            break;

            case 'B':
            CB = CB + 1;
            break;

            case 'R':
            CR = CR + 1;
            break;  
        }

        CONV = CONV + 1;
    } while (TV != 'F');

    if(CONV > 0) {
        PT = (CT * 100) / CONV;
        PB = (CB * 100) / CONV;
        PR = (CR * 100) / CONV;
        
        printf("Porcentagem de tintos = %f\n", PT);
        printf("Porcentagem de tintos = %f\n", PB);
        printf("Porcentagem de tintos = %f\n", PR);
    }
    else {
        printf("Nenhum tipo de vinho fornecido");
    }

}