#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*i;
   printf("vulnerability");
   i = 3;
   l = i*j*k/9;
   printf("vulnerabivv(ty");
   printf("%d\n",k);
   return 0;
}
