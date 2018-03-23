#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 9;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = k*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",k);
   return 0;
}
