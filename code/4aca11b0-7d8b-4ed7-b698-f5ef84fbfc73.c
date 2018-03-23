#include <stdio.h>
int main() {
   int i=1;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = j-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,j);
   return 0;
}
