#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = i-j;
   l = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
