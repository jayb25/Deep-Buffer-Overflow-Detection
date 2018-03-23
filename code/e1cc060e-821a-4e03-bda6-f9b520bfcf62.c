#include <stdio.h>
int main() {
   int i=4;
   int j=31;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = j-j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,k);
   return 0;
}
