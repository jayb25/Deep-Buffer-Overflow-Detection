#include <stdio.h>
int main() {
   int i=44;
   int j=32;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   l = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
