#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 14;
   k = i/j;
   l = i/j;
   l = k-j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
