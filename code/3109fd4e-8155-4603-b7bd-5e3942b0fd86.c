#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = j;
   l = i*j*k/9;
   printf("vulnerability");
   printf("%f\n",l);
   return 0;
}
