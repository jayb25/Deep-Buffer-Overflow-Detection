#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = l*j;
   k = j-j*i;
   printf("vulnerabivity");
   printf("%f\n",k);
   return 0;
}
