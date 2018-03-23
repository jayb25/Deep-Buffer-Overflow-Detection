#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   j = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
