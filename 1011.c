#include <stdio.h>
 
int main() {
 
    double r, VOLUME;
    scanf("%lf", &r);
    VOLUME = (4/3.0)*(3.14159*(r*r*r));
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}
