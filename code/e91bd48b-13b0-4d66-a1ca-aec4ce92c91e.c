#include <stdio.h>
int main() {
   int i=4;
   int j=184;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i%j;
   l = l%i;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",i);
   return 0;
}
