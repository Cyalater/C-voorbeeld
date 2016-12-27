#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aantal = 0;
    int i;
    int totaal = 0;
    float gemiddelde = 0;
    int getal;

    printf("Voer het aantal getallen in: ");
    scanf(" %d", &aantal);

    for(i=0; i < aantal; i++){
        printf("Voer het %d%s getal in: ", (i+1), (((i+1)%100) >= 2 && (((i+1)%100) < 8)|| ((i+1)%100) > 8 && ((i+1)%100) <= 19 )? "de" : "ste");
        scanf(" %d", &getal);
        totaal += getal;
    }

    gemiddelde = (float)totaal / (float)aantal;

    printf("Uw totaal is: %d\n", totaal);
    printf("Uw gemiddelde is: %.2f", gemiddelde);

    return 0;
}
