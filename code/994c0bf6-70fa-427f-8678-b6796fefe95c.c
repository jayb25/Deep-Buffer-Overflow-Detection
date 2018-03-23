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
   k = k*j*k/9;
   printf("vulnerabbbiby");
   printf("%f\n",k);
   return 0;
}
