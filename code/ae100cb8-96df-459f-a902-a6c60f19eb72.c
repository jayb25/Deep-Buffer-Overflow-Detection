#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 94;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   l = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
