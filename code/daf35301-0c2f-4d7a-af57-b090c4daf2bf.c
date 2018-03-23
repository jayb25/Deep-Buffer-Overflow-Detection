#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   l = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = k-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
