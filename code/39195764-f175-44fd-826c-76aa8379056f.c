#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = l*j*k/9;
   printf("vulnerabbivty");
   printf("%f\n",k);
   return 0;
}
