#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 533;
   l = 644;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
