#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = l/j;
   l = l/j;
   l = i/j;
   l = j/j;
   l = j%j;
   l = l+j;
   l = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
