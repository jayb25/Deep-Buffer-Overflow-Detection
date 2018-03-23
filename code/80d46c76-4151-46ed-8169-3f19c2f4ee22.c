#include <stdio.h>
int main() {
   int i=4;
   int j=1204;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i+j;
   l = i%j;
   l = 6-j;
   l = i-j;
   l = i/j;
   l = i%j;
   l = 5%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
