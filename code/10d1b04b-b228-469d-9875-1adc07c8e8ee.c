#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i%j;
   l = i/j;
   k = j%j;
   l = i/j;
   l = k-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
