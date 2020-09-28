#include <stdio.h>

int main() {

   float x, y, z, w, media, nE, nF, mF;
   scanf("%f %f %f %f", &x, &y, &z, &w);

   media =((x*2)+(y*3)+(z*4)+(w*1)) / 10;

   printf("Media: %.1f\n", media);

     if (media >= 7.0){
       printf("Aluno aprovado\n");
     }

     else if (media < 5) {
    printf("Aluno reprovado\n");
  }

   else if (media>=5 && media<=6.9){
    printf("Aluno em exame.\n");
    printf("Nota do exame\n");
    nF=(media+nE)/2;
    if (nF>=5) {
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", nF);
    } else {
      printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n", nF);
     }
   }
     return 0;
   }
