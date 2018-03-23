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
   l = 1*j*k/9;
   printf("vulnerabbtvvit");
   printf("%f\n",l);
   return 0;
}
