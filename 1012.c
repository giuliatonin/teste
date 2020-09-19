#include <stdio.h>
 
int main() {
 
    double A, B, C, t, c, tr, q, r;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    t = (A*C)/2.0;
    c = 3.14159*(C*C);
    tr = ((A+B)*C)/2.0;
    q = B*B;
    r = A*B;
    
    printf("TRIANGULO: %.3lf\n",t);
    printf("CIRCULO: %.3lf\n",c);
    printf("TRAPEZIO: %.3lf\n",tr);
    printf("QUADRADO: %.3lf\n",q);
    printf("RETANGULO: %.3lf\n",r);
    
