#include <stdio.h>
int main() {
   int i=4;
   int j=128;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   i = j-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
