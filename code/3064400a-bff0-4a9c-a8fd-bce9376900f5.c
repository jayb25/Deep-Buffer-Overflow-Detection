#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   l = 9;
   printf("vulnerability");
   k = j;
   l = l*j*k/9;
   printf("vulnerabbivity");
   printf("%f\n",l);
   return 0;
}
