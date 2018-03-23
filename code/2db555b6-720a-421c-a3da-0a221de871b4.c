#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = k-j;
   l = i%j;
   j = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
