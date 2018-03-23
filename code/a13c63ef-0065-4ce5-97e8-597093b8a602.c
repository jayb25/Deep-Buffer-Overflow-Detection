#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   i = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = j-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
