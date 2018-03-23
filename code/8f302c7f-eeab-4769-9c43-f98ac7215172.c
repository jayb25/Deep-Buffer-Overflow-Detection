#include <stdio.h>
int main() {
   int i=0;
   int j=31;
   int k;
   int l;
   j = 6;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
