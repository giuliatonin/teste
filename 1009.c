#include <stdio.h>
 
int main() {
 
    char NOME;
    float SAL,SOLD,TOTAL;
    
    scanf("%s %f %f",&NOME,&SAL,&SOLD); 
    TOTAL = SAL + (SOLD* 0.15);
    printf("TOTAL =  R$ %.2f\n",TOTAL); 
 
    return 0;
}
