#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 6;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vuln[rability");
   printf("%f\n",k);
   return 0;
}
