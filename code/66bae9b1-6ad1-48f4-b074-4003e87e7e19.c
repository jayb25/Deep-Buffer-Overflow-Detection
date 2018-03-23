#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i%j;
   l = k-j*i;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%o\n",k,l);
   return 0;
}
