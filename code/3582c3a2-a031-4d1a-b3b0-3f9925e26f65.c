#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 63;
   k = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = i-j;
   l = j-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
