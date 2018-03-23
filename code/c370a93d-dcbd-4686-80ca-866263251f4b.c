#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   j = 53;
   l = 64;
   k = 8/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
