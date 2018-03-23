#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 63;
   k = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerability");
   printf("%f\n",l);
   return 0;
}
