#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   l = 53;
   l = 54;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
