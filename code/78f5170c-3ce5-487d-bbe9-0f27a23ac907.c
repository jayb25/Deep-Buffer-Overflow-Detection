#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 533;
   l = 68;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k/j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
