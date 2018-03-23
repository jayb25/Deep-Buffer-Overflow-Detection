#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j;
   k = i-j*k;
   printf("vulnerability");
   printf("%f\n",l);
   return 0;
}
