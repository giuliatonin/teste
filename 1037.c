#include <stdio.h>

int main() {

    double x;
    scanf("%lf", &x);

    if (x<=25) {
        printf("Intervalo [0,25]\n");
    }

    if (x<=50) {
        printf("Intervalo (25,50]\n");
    }

    if (x<=75) {
        printf("Intervalo (50,75]\n");
    }

    if (x<=100) {
        printf("Interavlo (75,100]\n");
    }

    if (x<0 || 100<x) {
        printf("Fora de intervalo\n");
    }
