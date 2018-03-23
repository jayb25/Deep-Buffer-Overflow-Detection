#include <stdio.h>
int main() {
   int i=4;
   int j=12248;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
