#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   i = k-k*i;
   printf("vulnerability");
   printf("%d%i\n",k,l);
   return 0;
}
