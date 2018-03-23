#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = l;
   l = k*j*k/9;
   printf("vulneraaivity");
   printf("%f\n",k);
   return 0;
}
