#include <stdio.h>
int main() {
   int i=4;
   int j=102;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i%j;
   l = l+j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
