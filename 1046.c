#include <stdio.h>
 
int main() {
 
    int ti, tf, total;
    scanf("%d %d", &ti, &tf);
    total = tf-ti;
    if (total < 0){
        total = 24 + (tf - ti);
    }
    if (ti == tf){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
     printf("O JOGO DUROU %d HORA(S)\n", total);   
    } 
    return 0;
}
