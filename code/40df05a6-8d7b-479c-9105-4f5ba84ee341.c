#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 33;
   k = 64;
   l = i/j;
   l = j/j;
   l = l/j;
   l = l%j;
   l = i-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
