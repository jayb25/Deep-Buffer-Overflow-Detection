#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   i = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   i = l/j;
   l = j%j;
   l = i-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
