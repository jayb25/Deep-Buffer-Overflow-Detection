#include <stdio.h>
int main() {
   int i=4;
   int j=41;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   l = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
