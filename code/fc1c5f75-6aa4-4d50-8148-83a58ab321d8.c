#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 533;
   l = 64;
   k = l = i/j;
   l = i%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
