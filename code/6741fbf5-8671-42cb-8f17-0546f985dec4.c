#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   l = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = j%j;
   l = l+j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
