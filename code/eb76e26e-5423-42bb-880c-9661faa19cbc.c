#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 532;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
