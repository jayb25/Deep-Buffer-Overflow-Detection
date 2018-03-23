#include <stdio.h>
int main() {
   int i=04;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = k/j;
   l = l%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
