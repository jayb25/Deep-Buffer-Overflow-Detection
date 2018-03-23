#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = 1;
   l = i*j*k/9;
   printf("vulnerability");
   printf("%f\n",l);
   return 0;
}
