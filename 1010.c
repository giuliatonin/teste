#include <stdio.h>
 
int main() {
 
    int COD1, NUM1;
    double PRICE1, TOTAL1;
    
    int COD2, NUM2;
    double PRICE2, TOTAL2;
    
    double VALtotal;
    
 scanf("%d %d %lf", &COD1, &NUM1, &PRICE1);
 TOTAL1 = NUM1*PRICE1;
 
 scanf("%d %d %lf", &COD2, &NUM2, &PRICE2);
 TOTAL2 = NUM2*PRICE2;
 
 VALtotal = TOTAL1 + TOTAL2;
 
 printf("VALOR A PAGAR: R$ %.2lf\n", VALtotal);
    return 0;
}
