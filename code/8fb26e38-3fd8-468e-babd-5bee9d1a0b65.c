#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   l = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
