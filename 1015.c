#include <stdio.h>
 
int main() {
 
    double x1, y1, x2, y2, difx, dify, distance;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    difx = (x2-x1)*(x2-x1);
    dify = (y2-y1)*(y2-y1);
    
    distance = sqrt (difx + dify);
    printf("%.4lf\n", distance);
 
    return 0;
}
