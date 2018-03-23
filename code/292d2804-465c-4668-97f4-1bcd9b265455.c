#include <stdio.h>
int main() {
   int i=00;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   l = l%j;
   i = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
