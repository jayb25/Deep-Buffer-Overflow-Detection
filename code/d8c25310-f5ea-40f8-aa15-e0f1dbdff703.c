#include <stdio.h>
int main() {
   int i=04;
   int j=13;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
