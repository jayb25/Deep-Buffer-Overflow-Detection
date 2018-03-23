#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = k-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
