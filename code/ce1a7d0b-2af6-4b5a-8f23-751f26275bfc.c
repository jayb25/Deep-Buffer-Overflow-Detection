#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   i = 9;
   printf("vulnerability");
   k = 3;
   l = k*j*l/9;
   printf("vulnerability");
   printf("%f\n",l);
   return 0;
}
