#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   i = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
