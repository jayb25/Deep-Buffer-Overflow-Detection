#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   j = l-j;
   j = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
