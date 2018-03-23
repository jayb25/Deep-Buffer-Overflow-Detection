#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = l = l%j;
   l = k-j*j;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
