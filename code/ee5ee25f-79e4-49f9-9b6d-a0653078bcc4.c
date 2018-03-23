#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 4;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%dfn",k,l);
   return 0;
}
