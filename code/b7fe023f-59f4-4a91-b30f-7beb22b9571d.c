#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
