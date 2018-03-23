#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = 1;
   l = l*j*k/9;
   printf("vulnerability");
   printf("%f\n",k);
   return 0;
}
