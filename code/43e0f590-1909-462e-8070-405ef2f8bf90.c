#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   k = k-j*j;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
