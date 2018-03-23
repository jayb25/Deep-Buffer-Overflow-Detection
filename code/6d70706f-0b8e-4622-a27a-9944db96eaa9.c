#include <stdio.h>
int main() {
   int i=0;
   int j=324;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = k-k*j;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
