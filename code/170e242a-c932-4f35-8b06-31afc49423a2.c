#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i%j;
   l = l+j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
