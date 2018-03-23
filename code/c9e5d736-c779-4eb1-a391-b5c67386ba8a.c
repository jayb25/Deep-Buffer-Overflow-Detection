#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 63;
   l = 64;
   k = 6/j;
   l = i/j;
   l = j/j;
   l = k/j;
   l = j%j;
   l = l/j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
