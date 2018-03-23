#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = j/j;
   l = j%j;
   l = l+j;
   i = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
