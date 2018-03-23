#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = j;
   printf("vulnerability");
   k = j;
   l = i*j*k/9;
   printf("vulnerabbvgty");
   printf("%f\n",k);
   return 0;
}
