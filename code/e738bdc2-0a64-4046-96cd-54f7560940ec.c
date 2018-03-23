#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = j%j;
   l = i%j;
   j = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
