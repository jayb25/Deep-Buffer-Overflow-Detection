#include <stdio.h>
int main() {
   int i=4;
   int j=324;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
