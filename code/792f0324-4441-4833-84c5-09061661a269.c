#include <stdio.h>
int main() {
   int i=0;
   int j=16;
   int k;
   int l;
   k = 543;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-2*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
