#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = j-j;
   l = j-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
