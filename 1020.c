#include <stdio.h>
 
int main() {
 
 int idadeDias, anos, meses, dias;
 scanf("%d", &idadeDias);
 anos = idadeDias/365;
 idadeDias = idadeDias%365;
 meses = idadeDias/30;
 idadeDias = idadeDias%30;
 dias = idadeDias;
 
 
 printf("%d ano(s)\n",anos);
 printf("%d mes(es)\n", meses);
 printf("%d dia(s)\n", dias);
 
    return 0;
}
