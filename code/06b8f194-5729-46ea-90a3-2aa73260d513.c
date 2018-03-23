#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
