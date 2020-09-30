#include <stdio.h>

int main() {

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

   if ( x>y && y>z ){
    printf("%d\n",z );
    printf("%d\n",y );
    printf("%d\n", x);
   }
   if ( y>x && y>z && x>z){
    printf("%d\n",z );
    printf("%d\n",x );
    printf("%d\n",y );

   }
   if (z>y && y>x && z>x){
    printf("%d\n",x );
    printf("%d\n",y );
    printf("%d\n",z);
   }
   if (y>z && y>x && z>x ){
    printf("%d\n",x );
    printf("%d\n",z );
    printf("%d\n",y);
   }
   if ( x>z && y>z && y>x){
    printf("%d\n",y);
    printf("%d\n", x);
    printf("%d\n", z);
   }
   if ( z>x && y>x && y>x){
    printf("%d\n",y );
    printf("%d\n",z);
    printf("%d\n", x);
   }

    printf("\n");

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}
