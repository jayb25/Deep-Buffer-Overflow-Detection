#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 534;
   l = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   k = j-k*i;
   k = i%j;
   l = l+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
