#include <stdio.h>
int main() {
   int i=40;
   int j=32;
   int k;
   int l;
   k = 333;
   l = 64;
   k = i%j;
   l = i%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
