#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void ascithema() {
    char **pin;
    int i, N;
    printf("Dwse mou enan arithmo TWRA: ");
    scanf("%d", &N);
    pin = (char **) malloc(N*sizeof(char*));
    for(i = 0; i < N; i++) {
        pin[i] = (char *) calloc(N, 1);
        if (pin == NULL) {
            printf("Δεν υπάρχει αρκετός χώρος!!");
            exit(1);
        }
    }
    int sum=0;
    char randomletter;
    for(i = 0; i < N; i++) {
        randomletter = 'A' + (random() % 26);
        // OR randomletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random () % 26];
        printf("ASCII value of %c = %d\n", randomletter, randomletter);
        sum += randomletter;
        *pin[i] = randomletter;

    }
    for(i = 0; i < N; i++) {
        printf("%s ", pin[i]);
    }
    printf("\nsum == %d\n", (sum/N));
}
int main(){

  srand(time(NULL));
  ascithema();

}
