#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-j;
   k = k-k*j;
   printf("vulnerability");
   printf("%d%d\n",k,k);
   return 0;
}
