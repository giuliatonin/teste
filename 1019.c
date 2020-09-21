#include <stdio.h>
 
int main() {
 
 int N, hrs, min, seg;
   scanf("%d", &N);
   hrs = N/3600;
   N = N%3600;
   min = N/60;
   N = N%60;
   seg = N;
   printf("%d:%d:%d\n", hrs, min, seg);
 
    return 0;
}
