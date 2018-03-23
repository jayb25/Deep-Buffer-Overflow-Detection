#include <stdio.h>
int main() {
   int i=4;
   int j=1421;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = l-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
