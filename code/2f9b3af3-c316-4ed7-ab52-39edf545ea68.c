#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 63;
   l = 644;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l/j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
