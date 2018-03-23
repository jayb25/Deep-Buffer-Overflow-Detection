#include <stdio.h>
int main() {
   int i=0;
   int j=18;
   int k;
   int l;
   i = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
