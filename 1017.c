#include <stdio.h>
 
int main() {
 
    float t,vm,s,l, L;
    l = 12;
    scanf("%f %f %f", &t, &vm, &s);
    s = vm*t;
    L = (vm*t)/l;
    printf("%.3lf\n", L);
    
 
    return 0;
}
