#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   k = 64;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
