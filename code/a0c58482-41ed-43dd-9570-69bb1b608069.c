#include <stdio.h>
int main() {
   int i=40;
   int j=121;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = k-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
