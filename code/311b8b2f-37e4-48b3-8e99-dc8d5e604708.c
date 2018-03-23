#include <stdio.h>
int main() {
   int i=4;
   int j=43;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l%j;
   l = i/j;
   l = i%j;
   l = l%j;
   j = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
