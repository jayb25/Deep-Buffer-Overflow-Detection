#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j;
   k = i-k*i;
   printf("vulnerability");
   printf("%f\n",k);
   return 0;
}
