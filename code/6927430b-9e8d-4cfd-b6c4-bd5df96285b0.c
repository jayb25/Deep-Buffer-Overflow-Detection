#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
