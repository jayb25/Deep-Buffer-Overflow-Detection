#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   l = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbiviy");
   printf("%f\n",i);
   return 0;
}
