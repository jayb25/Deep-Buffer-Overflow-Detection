#include <stdio.h>
int main() {
   int i=4;
   int j=44;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
