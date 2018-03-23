#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 33;
   l = 6;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = k+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,k);
   return 0;
}
