#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   i = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
