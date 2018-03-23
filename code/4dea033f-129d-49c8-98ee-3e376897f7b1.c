#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
