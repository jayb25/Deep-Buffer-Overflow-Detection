#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = j%j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,k);
   return 0;
}
