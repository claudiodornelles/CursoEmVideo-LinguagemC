#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float dist, total;

    printf("<<< EX020 - Preço da Passagem >>>\n\n");

    printf("====== TABELA DE PREÇOS ======\n");
    printf("Viagens até\t200km\tR$0,50/km\n");
    printf("A partir de\t200km\tR$0,35/km\n ");
    printf("==============================\n");

    printf("\nDistância total da viagem (km): ");
    scanf("%f", &dist);

    printf("Uma viagem de %.1fkm vai custar ", dist);

    if (dist>200){
        printf("R$0,35/km.\n");
        total = dist * 0.35;
    } else {
        printf("R$0,50/km\n");
        total = dist * 0.5;
    }

    printf("Preço da passagem: R$%.2f\n", total);

}
