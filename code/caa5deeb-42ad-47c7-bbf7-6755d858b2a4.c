#include <stdio.h>
int main() {
   float i=4;
   int j=144;
   int k;
   int l;
   i = 532;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
