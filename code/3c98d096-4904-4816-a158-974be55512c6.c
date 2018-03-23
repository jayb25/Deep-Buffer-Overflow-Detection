#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
