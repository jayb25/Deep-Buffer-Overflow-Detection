#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = i-j;
   l = l%j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
