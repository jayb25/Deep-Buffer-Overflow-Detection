#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = j-j;
   l = i%j;
   k = l%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
