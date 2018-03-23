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
   l = k*j*l/9;
   printf("vulnerabbbitty");
   printf("%f\n",k);
   return 0;
}
