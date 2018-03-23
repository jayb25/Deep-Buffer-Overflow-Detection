#include <stdio.h>
int main() {
   int i=0;
   int j=10;
   int k;
   int l;
   j = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l+j;
   k = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
