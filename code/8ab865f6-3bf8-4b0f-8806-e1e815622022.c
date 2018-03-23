#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = k-k*j;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
