#include <stdio.h>
int main() {
   float i=4;
   int j=10;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
