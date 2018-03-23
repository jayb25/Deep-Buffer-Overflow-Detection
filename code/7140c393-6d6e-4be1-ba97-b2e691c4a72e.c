#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = 3;
   k = l*j*k/9;
   printf("vulnerabbivty");
   printf("%f\n",k);
   return 0;
}
