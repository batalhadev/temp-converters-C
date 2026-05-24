#include <stdio.h>
int main(){
    int escala;
    float C, F;
    printf("este é um conversor de temperaturas bidirecional entre Celsius e Fahrenheit.\n Por favor escolha a escala termométrica para qual você deseja converter:\n1 - Celsius\n2 - Fahrenheit\n");
    scanf("%d", &escala);
    while (escala !=1 && escala !=2){
    printf("Parece que houve um erro ao escolher a escala de temperatura desejada. Por favor tente novamente\n1 - Celsius\n2 - Fahrenheit\n");
    scanf("%d",&escala);
}
    if (escala == 1){
        printf("insira sua temperatura em Fahrenheit: ");
        scanf("%f", &F);
        C = (F-32)/1.8;
        printf("%.2f graus Fahrenheit é equivalente à %.2f graus Celsius.\n", F, C);
    }
    else if (escala == 2){
        printf("Insira sua temperatura em Celsius: ");
        scanf("%f", &C);
        F = (1.8*C) + 32;
        printf("%.2f graus Celsius é equivalente à %.2f graus Fahrenheit.", C, F);
    }
    return 0;
}