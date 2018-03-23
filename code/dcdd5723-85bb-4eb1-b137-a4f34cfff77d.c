#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i%j;
   l = l+j;
   j = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
