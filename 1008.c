#include <stdio.h>
 
int main() {
 
   int NUMBER, T;
   double VALUE, SALARY; 
   
   scanf("%d %d %lf", &NUMBER, &T, &VALUE);
   SALARY = VALUE*T;
   printf("NUMBER = %d\n", NUMBER);
   printf("SALARY = U$ %.2lf\n", SALARY);
 
    return 0;
}
