#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   k = 644;
   k = i/j;
   l = i%j;
   l = k+j;
   k = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
