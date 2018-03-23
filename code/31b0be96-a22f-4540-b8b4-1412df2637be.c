#include <stdio.h>
int main() {
   int i=44;
   int j=34;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = i%j;
   l = l+j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
