#include <stdio.h>
int main() {
   int i=4;
   int j=110;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = 3/j;
   l = i/j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
