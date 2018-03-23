#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 1;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbivty");
   printf("%f\n",l);
   return 0;
}
