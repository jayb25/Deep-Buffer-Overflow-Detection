#include <stdio.h>
int main() {
   int i=0;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
