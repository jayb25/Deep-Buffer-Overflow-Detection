#include <stdio.h>
int main() {
   int i=4;
   int j=1224;
   int k;
   int l;
   j = 533;
   l = 61;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
