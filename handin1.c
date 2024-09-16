#include <stdio.h>
#define SEK 1 // Definerer sekunder
#define MIN 60 // Definerer Minutter
#define TIME 60 // Definerer Timer
#define DAG 24 // Definerer Dage
#define UGER 7 // Definerer Uger

int main(void) {
    int sekunder; //Input sekunder
    printf("Skriv et antal sekunder:"); // Printer det jeg vil have brugeren til at se
    scanf("%d",&sekunder); // Jeg bruger scanf til at assigne en værdi

    int currentresult = sekunder/(SEK*MIN*TIME*DAG*UGER); // Currentresult viser hvor mange uger, det indtastet sekunder giver
    sekunder %= (SEK*MIN*TIME*DAG*UGER); // modulus bruger jeg for at restenværdien, af sekunderne
    printf("Uger: %d\n",currentresult); // Printer Uger på skærmen


    currentresult = sekunder/(SEK*MIN*TIME*DAG); // Det samme er gjort hernede dog, har jeg fjernet Uger
    sekunder %= (SEK*MIN*TIME*DAG); // Restværdien
    printf("Dage: %d\n",currentresult); // Printer "dage" ud på skærmen

    currentresult = sekunder/(SEK*MIN*TIME); // Samme gjort, dog har jeg fjernet uger og dage
    sekunder %= (SEK*MIN*TIME); // Restværdien
    printf("Timer: %d\n",currentresult); // Printer "timer"

    currentresult = sekunder/(SEK*MIN); // Beregner Minutter
    sekunder %= (SEK*MIN);  // Restværdien
    printf("Minutter: %d\n",currentresult); // Printer "Minutter"

    currentresult = sekunder/(SEK); // Beregner Sekunder
    sekunder %= (SEK); // Restværdien
    printf("Sekunder: %d\n",currentresult); // Printer "Sekunder"
}

