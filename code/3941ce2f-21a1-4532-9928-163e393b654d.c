#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   l = 53;
   l = 54;
   k = i/j;
   l = l/j;
   l = i%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
