#include <stdio.h>
int main() {
   int i=1;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
