#include <stdio.h>
 
int main() {
 
    int x, y;
  double total;
  scanf("%d %d", &x, &y);
  if (x==1) {
    total=y*4;
  }
  if (x==2) {
    total=y*4.5;
  }
  if (x==3){
    total=y*5;
  }
  if (x==4){
    total=y*2;
  }
  if (x==5){
    total=y*1.5;
  }
  printf("Total: R$ %.2lf\n", total);

    return 0;
}
