#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 55;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l+j;
   l = l%j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
