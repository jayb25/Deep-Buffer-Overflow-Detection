#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
