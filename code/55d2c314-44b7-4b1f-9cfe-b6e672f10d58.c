#include <stdio.h>
int main() {
   int i=4;
   int j=51;
   int k;
   int l;
   k = 533;
   l = 64;
   l = l/j;
   l = i%j;
   l = l+j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
