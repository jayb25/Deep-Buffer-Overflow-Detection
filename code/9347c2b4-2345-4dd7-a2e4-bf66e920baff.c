#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l+3;
   i = k-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
